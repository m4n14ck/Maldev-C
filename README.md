# MalDev-C

> Seguridad ofensiva y herramientas de Red Team escritas en C puro.

Este repositorio contiene una colección de implementaciones en C para investigación 
en desarrollo de malware, operaciones de Red Team y exploración de internals de Windows. 
Todo está escrito desde cero usando solo la API de Windows (WinAPI) y C estándar — 
sin frameworks, sin dependencias, sin mamadas.

## Qué contiene

- **Desarrollo de payloads** — MessageBox, downloaders, loaders de shellcode, etc.
- **Inyección de procesos** — Clásica, APC, thread hijacking, etc.
- **Evasión** — Bypass de AV/EDR, unhooking de APIs, parcheo de ETW, etc.
- **Persistencia** — Registro, tareas programadas, servicios, etc.
- **Criptografía** — AES-CNG, X25519, HKDF, etc.
- **Internals de Windows** — Parsing de PE, manipulación de memoria, syscalls, etc.

## Aviso legal

Este repositorio es solo para **investigación educativa y pentesting autorizado**. 
El autor no se hace responsable del mal uso. Si lo usas en producción, es tu pedo.
