# tp1

El archivo .gitignore es útil porque permite excluir ciertos archivos y carpetas del control de versiones en Git. Esto es importante porque.
- Evita subir archivos innecesarios
- Protege información sensible
- Mejora la organización del proyecto
- Optimiza el rendimiento de Git

Se recomienda agregar un .gitignore desde el inicio del proyecto, antes de hacer el primer commit.

El contenido del .gitignore depende del lenguaje y herramientas utilizadas en el proyecto.
.gitignore debe configurarse excluyendo archivos de dependencias como node_modules/ en Node.js o vendor/ en PHP, archivos de compilación como *.class, *.jar o dist/, configuraciones del sistema como .DS_Store y Thumbs.db, archivos de entorno como .env, cachés como __pycache__/ o *.pyc en Python, y bases de datos locales como db.sqlite3. En React se ignoran build/, en Django static/ y media/, y en Java target/. Para una configuración más precisa según el tipo de proyecto, se pueden usar plantillas de .gitignore disponibles en GitHub.

Apartado g) Se debe a que el puntero apunta a la variable previamente y almacena su direccion de memoria de esa misma variable, y el otro apartado muestra la direccion de memoria de la variable como tal.

Muestra la direccion de memoria del puntero, no es igual a los anteriores porque los otros datos son de la variable y este es del puntero que ocupa otro lugar en la memoria.