static const uint16_t presym_length_table[] = {
  1,	/* ! */
  1,	/* % */
  1,	/* & */
  1,	/* * */
  1,	/* + */
  1,	/* - */
  1,	/* / */
  1,	/* < */
  1,	/* > */
  1,	/* ^ */
  1,	/* ` */
  1,	/* a */
  1,	/* e */
  1,	/* h */
  1,	/* i */
  1,	/* j */
  1,	/* k */
  1,	/* m */
  1,	/* n */
  1,	/* s */
  1,	/* t */
  1,	/* v */
  1,	/* x */
  1,	/* y */
  1,	/* | */
  1,	/* ~ */
  2,	/* != */
  2,	/* !~ */
  2,	/* ** */
  2,	/* +@ */
  2,	/* -@ */
  2,	/* << */
  2,	/* <= */
  2,	/* == */
  2,	/* =~ */
  2,	/* >= */
  2,	/* >> */
  2,	/* GC */
  2,	/* [] */
  2,	/* sv */
  3,	/* <=> */
  3,	/* === */
  3,	/* NAN */
  3,	/* []= */
  3,	/* abs */
  3,	/* ary */
  3,	/* cmp */
  3,	/* div */
  3,	/* dup */
  3,	/* end */
  3,	/* idx */
  3,	/* key */
  3,	/* len */
  3,	/* lim */
  3,	/* map */
  3,	/* max */
  3,	/* mid */
  3,	/* min */
  3,	/* new */
  3,	/* num */
  3,	/* obj */
  3,	/* pop */
  3,	/* pos */
  3,	/* pre */
  3,	/* quo */
  3,	/* ret */
  3,	/* str */
  3,	/* sub */
  3,	/* sym */
  3,	/* val */
  4,	/* Hash */
  4,	/* NONE */
  4,	/* Proc */
  4,	/* all? */
  4,	/* any? */
  4,	/* args */
  4,	/* attr */
  4,	/* call */
  4,	/* ceil */
  4,	/* chop */
  4,	/* each */
  4,	/* eql? */
  4,	/* find */
  4,	/* flag */
  4,	/* grep */
  4,	/* gsub */
  4,	/* hash */
  4,	/* join */
  4,	/* key? */
  4,	/* keys */
  4,	/* lary */
  4,	/* last */
  4,	/* left */
  4,	/* lidx */
  4,	/* loop */
  4,	/* lval */
  4,	/* map! */
  4,	/* mesg */
  4,	/* name */
  4,	/* nan? */
  4,	/* next */
  4,	/* nil? */
  4,	/* plen */
  4,	/* post */
  4,	/* push */
  4,	/* ridx */
  4,	/* rval */
  4,	/* size */
  4,	/* sort */
  4,	/* step */
  4,	/* sub! */
  4,	/* succ */
  4,	/* this */
  4,	/* to_a */
  4,	/* to_f */
  4,	/* to_i */
  4,	/* to_s */
  4,	/* upto */
  4,	/* vals */
  5,	/* @args */
  5,	/* @name */
  5,	/* Array */
  5,	/* Class */
  5,	/* Float */
  5,	/* Range */
  5,	/* arity */
  5,	/* ary_F */
  5,	/* ary_T */
  5,	/* begin */
  5,	/* block */
  5,	/* bytes */
  5,	/* chomp */
  5,	/* chop! */
  5,	/* class */
  5,	/* clear */
  5,	/* clone */
  5,	/* first */
  5,	/* floor */
  5,	/* found */
  5,	/* gsub! */
  5,	/* index */
  5,	/* is_a? */
  5,	/* lsize */
  5,	/* merge */
  5,	/* names */
  5,	/* other */
  5,	/* raise */
  5,	/* right */
  5,	/* round */
  5,	/* shift */
  5,	/* slice */
  5,	/* sort! */
  5,	/* split */
  5,	/* stack */
  5,	/* start */
  5,	/* store */
  5,	/* times */
  6,	/* Fixnum */
  6,	/* Kernel */
  6,	/* Module */
  6,	/* Object */
  6,	/* String */
  6,	/* Symbol */
  6,	/* __id__ */
  6,	/* chomp! */
  6,	/* concat */
  6,	/* delete */
  6,	/* detect */
  6,	/* divmod */
  6,	/* downto */
  6,	/* empty? */
  6,	/* enable */
  6,	/* equal? */
  6,	/* extend */
  6,	/* freeze */
  6,	/* ifnone */
  6,	/* inject */
  6,	/* intern */
  6,	/* lambda */
  6,	/* length */
  6,	/* offset */
  6,	/* public */
  6,	/* reduce */
  6,	/* rehash */
  6,	/* reject */
  6,	/* result */
  6,	/* rindex */
  6,	/* select */
  6,	/* string */
  6,	/* to_int */
  6,	/* to_str */
  6,	/* to_sym */
  6,	/* upcase */
  6,	/* value? */
  6,	/* values */
  7,	/* Integer */
  7,	/* Numeric */
  7,	/* collect */
  7,	/* default */
  7,	/* disable */
  7,	/* entries */
  7,	/* finite? */
  7,	/* frozen? */
  7,	/* getbyte */
  7,	/* id2name */
  7,	/* include */
  7,	/* inspect */
  7,	/* member? */
  7,	/* message */
  7,	/* pattern */
  7,	/* pointer */
  7,	/* prepend */
  7,	/* private */
  7,	/* reject! */
  7,	/* replace */
  7,	/* reverse */
  7,	/* select! */
  7,	/* sep_len */
  7,	/* setbyte */
  7,	/* to_enum */
  7,	/* to_proc */
  7,	/* unshift */
  7,	/* upcase! */
  8,	/* INFINITY */
  8,	/* KeyError */
  8,	/* NilClass */
  8,	/* __ary_eq */
  8,	/* __delete */
  8,	/* __send__ */
  8,	/* __svalue */
  8,	/* __to_int */
  8,	/* __to_str */
  8,	/* _inspect */
  8,	/* allocate */
  8,	/* between? */
  8,	/* bytesize */
  8,	/* collect! */
  8,	/* default= */
  8,	/* downcase */
  8,	/* each_key */
  8,	/* extended */
  8,	/* find_all */
  8,	/* has_key? */
  8,	/* include? */
  8,	/* included */
  8,	/* kind_of? */
  8,	/* reverse! */
  8,	/* self_len */
  8,	/* str_each */
  8,	/* truncate */
  9,	/* Exception */
  9,	/* NameError */
  9,	/* TrueClass */
  9,	/* TypeError */
  9,	/* __ary_cmp */
  9,	/* __outer__ */
  9,	/* _gc_root_ */
  9,	/* ancestors */
  9,	/* backtrace */
  9,	/* byteslice */
  9,	/* const_get */
  9,	/* const_set */
  9,	/* delete_at */
  9,	/* downcase! */
  9,	/* each_byte */
  9,	/* each_line */
  9,	/* exception */
  9,	/* infinite? */
  9,	/* inherited */
  9,	/* iterator? */
  9,	/* object_id */
  9,	/* partition */
  9,	/* prepended */
  9,	/* protected */
  9,	/* separator */
  10,	/* Comparable */
  10,	/* Enumerable */
  10,	/* FalseClass */
  10,	/* FiberError */
  10,	/* IndexError */
  10,	/* RangeError */
  10,	/* __case_eqq */
  10,	/* capitalize */
  10,	/* class_eval */
  10,	/* each_index */
  10,	/* each_value */
  10,	/* has_value? */
  10,	/* initialize */
  10,	/* recur_list */
  10,	/* step_ratio */
  10,	/* superclass */
  11,	/* BasicObject */
  11,	/* FrozenError */
  11,	/* RUBY_ENGINE */
  11,	/* RegexpError */
  11,	/* ScriptError */
  11,	/* SyntaxError */
  11,	/* __ary_index */
  11,	/* _recur_list */
  11,	/* attr_reader */
  11,	/* attr_writer */
  11,	/* capitalize! */
  11,	/* module_eval */
  11,	/* respond_to? */
  11,	/* step_ratio= */
  12,	/* RUBY_VERSION */
  12,	/* RuntimeError */
  12,	/* __attached__ */
  12,	/* alias_method */
  12,	/* block_given? */
  12,	/* default_proc */
  12,	/* exclude_end? */
  12,	/* instance_of? */
  12,	/* remove_const */
  12,	/* undef_method */
  13,	/* ArgumentError */
  13,	/* MRUBY_VERSION */
  13,	/* NoMemoryError */
  13,	/* NoMethodError */
  13,	/* StandardError */
  13,	/* StopIteration */
  13,	/* __classname__ */
  13,	/* __sub_replace */
  13,	/* __update_hash */
  13,	/* attr_accessor */
  13,	/* const_missing */
  13,	/* default_proc= */
  13,	/* define_method */
  13,	/* extend_object */
  13,	/* instance_eval */
  13,	/* set_backtrace */
  14,	/* LocalJumpError */
  14,	/* __upto_endless */
  14,	/* const_defined? */
  14,	/* interval_ratio */
  14,	/* method_missing */
  14,	/* paragraph_mode */
  15,	/* MRUBY_COPYRIGHT */
  15,	/* append_features */
  15,	/* each_with_index */
  15,	/* initialize_copy */
  15,	/* interval_ratio= */
  15,	/* method_defined? */
  15,	/* module_function */
  16,	/* FloatDomainError */
  16,	/* MRUBY_RELEASE_NO */
  16,	/* SystemStackError */
  16,	/* prepend_features */
  17,	/* MRUBY_DESCRIPTION */
  17,	/* ZeroDivisionError */
  17,	/* generational_mode */
  18,	/* MRUBY_RELEASE_DATE */
  18,	/* generational_mode= */
  19,	/* NotImplementedError */
  19,	/* RUBY_ENGINE_VERSION */
  19,	/* respond_to_missing? */
  21,	/* __coerce_step_counter */
  24,	/* remove_instance_variable */
  31,	/* should_yield_subclass_instances */
};

static const char * const presym_name_table[] = {
  "!",
  "%",
  "&",
  "*",
  "+",
  "-",
  "/",
  "<",
  ">",
  "^",
  "`",
  "a",
  "e",
  "h",
  "i",
  "j",
  "k",
  "m",
  "n",
  "s",
  "t",
  "v",
  "x",
  "y",
  "|",
  "~",
  "!=",
  "!~",
  "**",
  "+@",
  "-@",
  "<<",
  "<=",
  "==",
  "=~",
  ">=",
  ">>",
  "GC",
  "[]",
  "sv",
  "<=>",
  "===",
  "NAN",
  "[]=",
  "abs",
  "ary",
  "cmp",
  "div",
  "dup",
  "end",
  "idx",
  "key",
  "len",
  "lim",
  "map",
  "max",
  "mid",
  "min",
  "new",
  "num",
  "obj",
  "pop",
  "pos",
  "pre",
  "quo",
  "ret",
  "str",
  "sub",
  "sym",
  "val",
  "Hash",
  "NONE",
  "Proc",
  "all?",
  "any?",
  "args",
  "attr",
  "call",
  "ceil",
  "chop",
  "each",
  "eql?",
  "find",
  "flag",
  "grep",
  "gsub",
  "hash",
  "join",
  "key?",
  "keys",
  "lary",
  "last",
  "left",
  "lidx",
  "loop",
  "lval",
  "map!",
  "mesg",
  "name",
  "nan?",
  "next",
  "nil?",
  "plen",
  "post",
  "push",
  "ridx",
  "rval",
  "size",
  "sort",
  "step",
  "sub!",
  "succ",
  "this",
  "to_a",
  "to_f",
  "to_i",
  "to_s",
  "upto",
  "vals",
  "@args",
  "@name",
  "Array",
  "Class",
  "Float",
  "Range",
  "arity",
  "ary_F",
  "ary_T",
  "begin",
  "block",
  "bytes",
  "chomp",
  "chop!",
  "class",
  "clear",
  "clone",
  "first",
  "floor",
  "found",
  "gsub!",
  "index",
  "is_a?",
  "lsize",
  "merge",
  "names",
  "other",
  "raise",
  "right",
  "round",
  "shift",
  "slice",
  "sort!",
  "split",
  "stack",
  "start",
  "store",
  "times",
  "Fixnum",
  "Kernel",
  "Module",
  "Object",
  "String",
  "Symbol",
  "__id__",
  "chomp!",
  "concat",
  "delete",
  "detect",
  "divmod",
  "downto",
  "empty?",
  "enable",
  "equal?",
  "extend",
  "freeze",
  "ifnone",
  "inject",
  "intern",
  "lambda",
  "length",
  "offset",
  "public",
  "reduce",
  "rehash",
  "reject",
  "result",
  "rindex",
  "select",
  "string",
  "to_int",
  "to_str",
  "to_sym",
  "upcase",
  "value?",
  "values",
  "Integer",
  "Numeric",
  "collect",
  "default",
  "disable",
  "entries",
  "finite?",
  "frozen?",
  "getbyte",
  "id2name",
  "include",
  "inspect",
  "member?",
  "message",
  "pattern",
  "pointer",
  "prepend",
  "private",
  "reject!",
  "replace",
  "reverse",
  "select!",
  "sep_len",
  "setbyte",
  "to_enum",
  "to_proc",
  "unshift",
  "upcase!",
  "INFINITY",
  "KeyError",
  "NilClass",
  "__ary_eq",
  "__delete",
  "__send__",
  "__svalue",
  "__to_int",
  "__to_str",
  "_inspect",
  "allocate",
  "between?",
  "bytesize",
  "collect!",
  "default=",
  "downcase",
  "each_key",
  "extended",
  "find_all",
  "has_key?",
  "include?",
  "included",
  "kind_of?",
  "reverse!",
  "self_len",
  "str_each",
  "truncate",
  "Exception",
  "NameError",
  "TrueClass",
  "TypeError",
  "__ary_cmp",
  "__outer__",
  "_gc_root_",
  "ancestors",
  "backtrace",
  "byteslice",
  "const_get",
  "const_set",
  "delete_at",
  "downcase!",
  "each_byte",
  "each_line",
  "exception",
  "infinite?",
  "inherited",
  "iterator?",
  "object_id",
  "partition",
  "prepended",
  "protected",
  "separator",
  "Comparable",
  "Enumerable",
  "FalseClass",
  "FiberError",
  "IndexError",
  "RangeError",
  "__case_eqq",
  "capitalize",
  "class_eval",
  "each_index",
  "each_value",
  "has_value?",
  "initialize",
  "recur_list",
  "step_ratio",
  "superclass",
  "BasicObject",
  "FrozenError",
  "RUBY_ENGINE",
  "RegexpError",
  "ScriptError",
  "SyntaxError",
  "__ary_index",
  "_recur_list",
  "attr_reader",
  "attr_writer",
  "capitalize!",
  "module_eval",
  "respond_to?",
  "step_ratio=",
  "RUBY_VERSION",
  "RuntimeError",
  "__attached__",
  "alias_method",
  "block_given?",
  "default_proc",
  "exclude_end?",
  "instance_of?",
  "remove_const",
  "undef_method",
  "ArgumentError",
  "MRUBY_VERSION",
  "NoMemoryError",
  "NoMethodError",
  "StandardError",
  "StopIteration",
  "__classname__",
  "__sub_replace",
  "__update_hash",
  "attr_accessor",
  "const_missing",
  "default_proc=",
  "define_method",
  "extend_object",
  "instance_eval",
  "set_backtrace",
  "LocalJumpError",
  "__upto_endless",
  "const_defined?",
  "interval_ratio",
  "method_missing",
  "paragraph_mode",
  "MRUBY_COPYRIGHT",
  "append_features",
  "each_with_index",
  "initialize_copy",
  "interval_ratio=",
  "method_defined?",
  "module_function",
  "FloatDomainError",
  "MRUBY_RELEASE_NO",
  "SystemStackError",
  "prepend_features",
  "MRUBY_DESCRIPTION",
  "ZeroDivisionError",
  "generational_mode",
  "MRUBY_RELEASE_DATE",
  "generational_mode=",
  "NotImplementedError",
  "RUBY_ENGINE_VERSION",
  "respond_to_missing?",
  "__coerce_step_counter",
  "remove_instance_variable",
  "should_yield_subclass_instances",
};
