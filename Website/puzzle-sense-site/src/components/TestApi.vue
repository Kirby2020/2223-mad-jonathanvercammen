<template>
  <div>
    <h1>Messages</h1>
    <button @click="updateMessages">
      Update Messages
    </button>
    <ul>
      <li>{{ messages.value }}</li>
      <li v-for="message in messages.value" :key="message.id">
        {{ message.content }}
      </li>
    </ul>
  </div>
</template>

<script setup>
import { getMessages } from "@/firebase";
import { onMounted, ref } from "vue";

const messages = ref([]);

onMounted(async () => {
  updateMessages();
});

function updateMessages() {
  messages.value = getMessages();
  console.log(messages.value);
  console.log(messages.value[0]);
  console.log(messages.value.entries()[0]);
}
</script>
