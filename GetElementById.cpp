<!DOCTYPE html>
<html>
<body>
  <p id="typing"></p>
  <script>
    const text = "Hello, World!";
    let i = 0;
    const typing = setInterval(() => {
      document.getElementById("typing").textContent += text.charAt(i);
      i++;
      if (i === text.length) clearInterval(typing);
    }, 100);
  </script>
</body>
</html>
