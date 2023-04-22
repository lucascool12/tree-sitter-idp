(function
  (name) @function)
(procedure_decl
  (name) @function)

(function_decl
  (name) @function)
(type_decl
  (name) @type)
(type) @type
(identifier
  (name) @variable)

[
  "True"
  "False"
] @boolean

[
 (int)
 (real)
] @number

(comment) @comment

[
 "type"
 "procedure"
 "theory"
 "vocabulary"
 "structure"
 (in)
 (not_in)
] @keyword
