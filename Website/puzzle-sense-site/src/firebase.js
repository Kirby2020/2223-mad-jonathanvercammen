import { initializeApp } from "firebase/app";
import { getFirestore, collection, getDocs } from "firebase/firestore/lite";

// TODO: Add SDKs for Firebase products that you want to use
// https://firebase.google.com/docs/web/setup#available-libraries

// Your web app's Firebase configuration
// For Firebase JS SDK v7.20.0 and later, measurementId is optional
const firebaseConfig = {
  apiKey: "AIzaSyBCdF9_orylOE6T6zAEULrnYEOWvYPmUOM",
  authDomain: "puzzle-sense.firebaseapp.com",
  databaseURL:
    "https://puzzle-sense-default-rtdb.europe-west1.firebasedatabase.app",
  projectId: "puzzle-sense",
  storageBucket: "puzzle-sense.appspot.com",
  messagingSenderId: "5337848536",
  appId: "1:5337848536:web:06dfbbac3a6456431c15ad",
  measurementId: "G-M8RLNNCV42",
};

// Initialize Firebase
const firebase = initializeApp(firebaseConfig);
const firestore = getFirestore(firebase);
const messagesCollection = collection(firestore, "messages");

export function createMessage(message) {
  return messagesCollection.add(message);
}

export function getMessages() {
  const messages = [];
  getDocs(messagesCollection).then((querySnapshot) => {
    querySnapshot.forEach((doc) => {
      messages.push({ id: doc.id, ...doc.data() });
    });
  });
  return messages;
}

export async function getMessage(id) {
  return await getDocs(collection(firestore, "messages", id));
}

export function deleteMessage(id) {
  return getDocs(collection(firestore, "messages", id)).delete();
}

export function updateMessage(id, message) {
  return getDocs(collection(firestore, "messages", id)).update(message);
}
