<?hh // strict
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

/**
 * Original thrift struct:-
 * Foo
 */
class Foo implements \IThriftStruct, \IThriftShapishStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'just_int',
      'type' => \TType::I32,
    ),
    2 => shape(
      'var' => 'list_of_strings',
      'type' => \TType::LST,
      'etype' => \TType::STRING,
      'elem' => shape(
        'type' => \TType::STRING,
      ),
      'format' => 'collection',
    ),
    3 => shape(
      'var' => 'set_of_ints',
      'type' => \TType::SET,
      'etype' => \TType::I32,
      'elem' => shape(
        'type' => \TType::I32,
      ),
      'format' => 'array',
    ),
    4 => shape(
      'var' => 'map_of_list_of_strings',
      'type' => \TType::MAP,
      'ktype' => \TType::STRING,
      'vtype' => \TType::LST,
      'key' => shape(
        'type' => \TType::STRING,
      ),
      'val' => shape(
        'type' => \TType::LST,
        'etype' => \TType::STRING,
        'elem' => shape(
          'type' => \TType::STRING,
        ),
        'format' => 'collection',
      ),
      'format' => 'collection',
    ),
    5 => shape(
      'var' => 'map_of_set_of_strings',
      'type' => \TType::MAP,
      'ktype' => \TType::STRING,
      'vtype' => \TType::SET,
      'key' => shape(
        'type' => \TType::STRING,
      ),
      'val' => shape(
        'type' => \TType::SET,
        'etype' => \TType::STRING,
        'elem' => shape(
          'type' => \TType::STRING,
        ),
        'format' => 'array',
      ),
      'format' => 'collection',
    ),
    6 => shape(
      'var' => 'map_of_strings_to_map_of_string_ints',
      'type' => \TType::MAP,
      'ktype' => \TType::STRING,
      'vtype' => \TType::MAP,
      'key' => shape(
        'type' => \TType::STRING,
      ),
      'val' => shape(
        'type' => \TType::MAP,
        'ktype' => \TType::STRING,
        'vtype' => \TType::I32,
        'key' => shape(
          'type' => \TType::STRING,
        ),
        'val' => shape(
          'type' => \TType::I32,
        ),
        'format' => 'collection',
      ),
      'format' => 'collection',
    ),
    7 => shape(
      'var' => 'optional_map_of_map_of_sets',
      'type' => \TType::MAP,
      'ktype' => \TType::I32,
      'vtype' => \TType::MAP,
      'key' => shape(
        'type' => \TType::I32,
      ),
      'val' => shape(
        'type' => \TType::MAP,
        'ktype' => \TType::I32,
        'vtype' => \TType::SET,
        'key' => shape(
          'type' => \TType::I32,
        ),
        'val' => shape(
          'type' => \TType::SET,
          'etype' => \TType::STRING,
          'elem' => shape(
            'type' => \TType::STRING,
          ),
          'format' => 'array',
        ),
        'format' => 'collection',
      ),
      'format' => 'collection',
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'just_int' => 1,
    'list_of_strings' => 2,
    'set_of_ints' => 3,
    'map_of_list_of_strings' => 4,
    'map_of_set_of_strings' => 5,
    'map_of_strings_to_map_of_string_ints' => 6,
    'optional_map_of_map_of_sets' => 7,
  ];

  const type TConstructorShape = shape(
    ?'just_int' => ?int,
    ?'list_of_strings' => ?Vector<string>,
    ?'set_of_ints' => ?darray<int, bool>,
    ?'map_of_list_of_strings' => ?Map<string, Vector<string>>,
    ?'map_of_set_of_strings' => ?Map<string, darray<string, bool>>,
    ?'map_of_strings_to_map_of_string_ints' => ?Map<string, Map<string, int>>,
    ?'optional_map_of_map_of_sets' => ?Map<int, Map<int, darray<string, bool>>>,
  );

  const type TShape = shape(
    'just_int' => int,
    'list_of_strings' => varray<string>,
    'set_of_ints' => darray<int, bool>,
    'map_of_list_of_strings' => darray<string, varray<string>>,
    'map_of_set_of_strings' => darray<string, darray<string, bool>>,
    'map_of_strings_to_map_of_string_ints' => darray<string, darray<string, int>>,
    ?'optional_map_of_map_of_sets' => ?darray<int, darray<int, darray<string, bool>>>,
    ...
  );
  const int STRUCTURAL_ID = 6419322044061300149;
  /**
   * Original thrift field:-
   * 1: i32 just_int
   */
  public int $just_int;
  /**
   * Original thrift field:-
   * 2: list<string> list_of_strings
   */
  public Vector<string> $list_of_strings;
  /**
   * Original thrift field:-
   * 3: set<i32> set_of_ints
   */
  public darray<int, bool> $set_of_ints;
  /**
   * Original thrift field:-
   * 4: map<string, list<string>> map_of_list_of_strings
   */
  public Map<string, Vector<string>> $map_of_list_of_strings;
  /**
   * Original thrift field:-
   * 5: map<string, set<string>> map_of_set_of_strings
   */
  public Map<string, darray<string, bool>> $map_of_set_of_strings;
  /**
   * Original thrift field:-
   * 6: map<string, map<string, i32>> map_of_strings_to_map_of_string_ints
   */
  public Map<string, Map<string, int>> $map_of_strings_to_map_of_string_ints;
  /**
   * Original thrift field:-
   * 7: map<i32, map<i32, set<string>>> optional_map_of_map_of_sets
   */
  public ?Map<int, Map<int, darray<string, bool>>> $optional_map_of_map_of_sets;

  public function __construct(?int $just_int = null, ?Vector<string> $list_of_strings = null, ?darray<int, bool> $set_of_ints = null, ?Map<string, Vector<string>> $map_of_list_of_strings = null, ?Map<string, darray<string, bool>> $map_of_set_of_strings = null, ?Map<string, Map<string, int>> $map_of_strings_to_map_of_string_ints = null, ?Map<int, Map<int, darray<string, bool>>> $optional_map_of_map_of_sets = null  )[] {
    $this->just_int = $just_int ?? 0;
    $this->list_of_strings = $list_of_strings ?? Vector {};
    $this->set_of_ints = $set_of_ints ?? dict[];
    $this->map_of_list_of_strings = $map_of_list_of_strings ?? Map {};
    $this->map_of_set_of_strings = $map_of_set_of_strings ?? Map {};
    $this->map_of_strings_to_map_of_string_ints = $map_of_strings_to_map_of_string_ints ?? Map {};
    $this->optional_map_of_map_of_sets = $optional_map_of_map_of_sets;
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'just_int'),
      Shapes::idx($shape, 'list_of_strings'),
      Shapes::idx($shape, 'set_of_ints'),
      Shapes::idx($shape, 'map_of_list_of_strings'),
      Shapes::idx($shape, 'map_of_set_of_strings'),
      Shapes::idx($shape, 'map_of_strings_to_map_of_string_ints'),
      Shapes::idx($shape, 'optional_map_of_map_of_sets'),
    );
  }

  public function getName()[]: string {
    return 'Foo';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.Foo",
        "fields" => vec[
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_I32_TYPE,
                )
              ),
              "name" => "just_int",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 2,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_list" => tmeta_ThriftListType::fromShape(
                    shape(
                      "valueType" => tmeta_ThriftType::fromShape(
                        shape(
                          "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                        )
                      ),
                    )
                  ),
                )
              ),
              "name" => "list_of_strings",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 3,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_set" => tmeta_ThriftSetType::fromShape(
                    shape(
                      "valueType" => tmeta_ThriftType::fromShape(
                        shape(
                          "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_I32_TYPE,
                        )
                      ),
                    )
                  ),
                )
              ),
              "name" => "set_of_ints",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 4,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_map" => tmeta_ThriftMapType::fromShape(
                    shape(
                      "keyType" => tmeta_ThriftType::fromShape(
                        shape(
                          "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                        )
                      ),
                      "valueType" => tmeta_ThriftType::fromShape(
                        shape(
                          "t_list" => tmeta_ThriftListType::fromShape(
                            shape(
                              "valueType" => tmeta_ThriftType::fromShape(
                                shape(
                                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                                )
                              ),
                            )
                          ),
                        )
                      ),
                    )
                  ),
                )
              ),
              "name" => "map_of_list_of_strings",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 5,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_map" => tmeta_ThriftMapType::fromShape(
                    shape(
                      "keyType" => tmeta_ThriftType::fromShape(
                        shape(
                          "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                        )
                      ),
                      "valueType" => tmeta_ThriftType::fromShape(
                        shape(
                          "t_set" => tmeta_ThriftSetType::fromShape(
                            shape(
                              "valueType" => tmeta_ThriftType::fromShape(
                                shape(
                                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                                )
                              ),
                            )
                          ),
                        )
                      ),
                    )
                  ),
                )
              ),
              "name" => "map_of_set_of_strings",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 6,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_map" => tmeta_ThriftMapType::fromShape(
                    shape(
                      "keyType" => tmeta_ThriftType::fromShape(
                        shape(
                          "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                        )
                      ),
                      "valueType" => tmeta_ThriftType::fromShape(
                        shape(
                          "t_map" => tmeta_ThriftMapType::fromShape(
                            shape(
                              "keyType" => tmeta_ThriftType::fromShape(
                                shape(
                                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                                )
                              ),
                              "valueType" => tmeta_ThriftType::fromShape(
                                shape(
                                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_I32_TYPE,
                                )
                              ),
                            )
                          ),
                        )
                      ),
                    )
                  ),
                )
              ),
              "name" => "map_of_strings_to_map_of_string_ints",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 7,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_map" => tmeta_ThriftMapType::fromShape(
                    shape(
                      "keyType" => tmeta_ThriftType::fromShape(
                        shape(
                          "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_I32_TYPE,
                        )
                      ),
                      "valueType" => tmeta_ThriftType::fromShape(
                        shape(
                          "t_map" => tmeta_ThriftMapType::fromShape(
                            shape(
                              "keyType" => tmeta_ThriftType::fromShape(
                                shape(
                                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_I32_TYPE,
                                )
                              ),
                              "valueType" => tmeta_ThriftType::fromShape(
                                shape(
                                  "t_set" => tmeta_ThriftSetType::fromShape(
                                    shape(
                                      "valueType" => tmeta_ThriftType::fromShape(
                                        shape(
                                          "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                                        )
                                      ),
                                    )
                                  ),
                                )
                              ),
                            )
                          ),
                        )
                      ),
                    )
                  ),
                )
              ),
              "name" => "optional_map_of_map_of_sets",
              "is_optional" => true,
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

  public static function __fromShape(self::TShape $shape)[]: this {
    return new static(
      $shape['just_int'],
      (new Vector($shape['list_of_strings'])),
      $shape['set_of_ints'],
      (new Map($shape['map_of_list_of_strings']))->map(
        $val0 ==> (new Vector($val0)),
      ),
      (new Map($shape['map_of_set_of_strings'])),
      (new Map($shape['map_of_strings_to_map_of_string_ints']))->map(
        $val1 ==> (new Map($val1)),
      ),
      Shapes::idx($shape, 'optional_map_of_map_of_sets') === null ? null : ((new Map($shape['optional_map_of_map_of_sets']))->map(
        $val2 ==> (new Map($val2)),
      )),
    );
  }

  public function __toShape()[]: self::TShape {
    return shape(
      'just_int' => $this->just_int,
      'list_of_strings' => vec($this->list_of_strings),
      'set_of_ints' => $this->set_of_ints,
      'map_of_list_of_strings' => $this->map_of_list_of_strings->map(
        ($_val0) ==> vec($_val0),
      )
        |> ThriftUtil::toDArray($$, static::class),
      'map_of_set_of_strings' => $this->map_of_set_of_strings->map(
        ($_val0) ==> dict($_val0),
      )
        |> ThriftUtil::toDArray($$, static::class),
      'map_of_strings_to_map_of_string_ints' => $this->map_of_strings_to_map_of_string_ints->map(
        ($_val0) ==> ThriftUtil::toDArray($_val0, static::class),
      )
        |> ThriftUtil::toDArray($$, static::class),
      'optional_map_of_map_of_sets' => $this->optional_map_of_map_of_sets?->map(
        ($_val0) ==> $_val0->map(
          ($_val1) ==> dict($_val1),
        )
          |> ThriftUtil::toDArray($$, static::class),
      )
        |> $$ === null ? null : ThriftUtil::toDArray($$, static::class),
    );
  }
}

