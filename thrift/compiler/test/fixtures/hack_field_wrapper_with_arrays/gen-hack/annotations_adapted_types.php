<?hh
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

namespace thrift_adapted_types {
type i64WithWrapper = int;
}
namespace thrift_adapted_types {

  /**
   * Original thrift struct:-
   * StructWithWrapper
   */
class StructWithWrapper implements \IThriftSyncStruct, \IThriftShapishSyncStruct {
    use \ThriftSerializationTrait;

    const dict<int, this::TFieldSpec> SPEC = dict[
      1 => shape(
        'var' => 'int_field',
        'type' => \TType::I64,
      ),
    ];
    const dict<string, int> FIELDMAP = dict[
      'int_field' => 1,
    ];

    const type TConstructorShape = shape(
      ?'int_field' => ?int,
    );

    const type TShape = shape(
      'int_field' => int,
    );
    const int STRUCTURAL_ID = 8549930382776002541;
    /**
     * Original thrift field:-
     * 1: i64 int_field
     */
    public int $int_field;

    public function __construct(?int $int_field = null)[] {
      $this->int_field = $int_field ?? 0;
    }

    public static function withDefaultValues()[]: this {
      return new static();
    }

    public static function fromShape(self::TConstructorShape $shape)[]: this {
      return new static(
        Shapes::idx($shape, 'int_field'),
      );
    }

    public static function fromMap_DEPRECATED(@KeyedContainer<string, mixed> $map)[]: this {
      return new static(
        HH\FIXME\UNSAFE_CAST<mixed, int>(idx($map, 'int_field'), 'map value is mixed'),
      );
    }

    public function getName()[]: string {
      return 'StructWithWrapper';
    }

    public static function getStructMetadata()[]: \tmeta_ThriftStruct {
      return \tmeta_ThriftStruct::fromShape(
        shape(
          "name" => "annotations.StructWithWrapper",
          "fields" => vec[
            \tmeta_ThriftField::fromShape(
              shape(
                "id" => 1,
                "type" => \tmeta_ThriftType::fromShape(
                  shape(
                    "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_I64_TYPE,
                  )
                ),
                "name" => "int_field",
              )
            ),
          ],
          "is_union" => false,
        )
      );
    }

    public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
      return shape(
        'struct' => dict[
          '\thrift\annotation\hack\Wrapper' => \thrift\annotation\hack\Wrapper::fromShape(
            shape(
              "name" => "\MyStructWrapper",
            )
          ),
        ],
        'fields' => dict[
        ],
      );
    }

    public static function __stringifyMapKeys<T>(dict<arraykey, T> $m)[]: dict<string, T> {
      return Dict\map_keys($m, $key ==> (string)$key);
    }

    public static function __fromShape(self::TShape $shape)[]: this {
      return new static(
        $shape['int_field'],
      );
    }

    public function __toShape()[]: self::TShape {
      return shape(
        'int_field' => $this->int_field,
      );
    }
    public function getInstanceKey()[write_props]: string {
      return \TCompactSerializer::serialize($this);
    }

    public function readFromJson(string $jsonText): void {
      $parsed = json_decode($jsonText, true);

      if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
        throw new \TProtocolException("Cannot parse the given json string.");
      }

      if (idx($parsed, 'int_field') !== null) {
        $this->int_field = HH\FIXME\UNSAFE_CAST<mixed, int>($parsed['int_field']);
      }
    }

  }


}

