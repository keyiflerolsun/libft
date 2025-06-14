# Libft

Bu proje, C programlama dilinde temel kütüphane fonksiyonlarının kendi başınıza yeniden yazılmasını amaçlar. `libft`, 42 öğrencileri için sıklıkla kullanılan ve çeşitli projelerde temel olarak ihtiyaç duyulan fonksiyonları içerir.

## İçerik

- Karakter ve string işlemleri (`ft_isalpha`, `ft_strlen`, `ft_strncmp`, ...)
- Bellek yönetimi fonksiyonları (`ft_memset`, `ft_calloc`, ...)
- Dosyaya çıktı fonksiyonları (`ft_putchar_fd`, `ft_putstr_fd`, ...)
- Bağlı liste işlemleri (bonus kısmı)

## Derleme

Projeyi derlemek için terminalde aşağıdaki komutu kullanabilirsiniz:

```sh
make
```

Bonus fonksiyonları da dahil etmek için:

```sh
make bonus
```

Temizlik yapmak için:

```sh
make clean
make fclean
```

## Kullanım

Derleme sonrası oluşan `libft.a` statik kütüphanesini kendi projelerinizde aşağıdaki gibi kullanabilirsiniz:

```c
#include "libft.h"
```
