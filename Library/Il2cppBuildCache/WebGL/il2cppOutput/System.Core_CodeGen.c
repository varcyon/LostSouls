#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.String SR::Format(System.String,System.Object)
extern void SR_Format_m7A21873FD59FBF9CD36B4F733BB49D1F470F8829 (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000003 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2 (void);
// 0x00000004 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000005 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000006 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000007 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000008 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000009 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000C System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000D System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000E System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000010 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000012 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000013 TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000014 TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000015 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000016 TSource System.Linq.Enumerable::ElementAt(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x00000017 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000018 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000019 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001A System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001B System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x0000001C System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000001D System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x0000001E TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000001F System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000020 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000021 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000022 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000023 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000024 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000025 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000026 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000027 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000028 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000029 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x0000002A System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x0000002B System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x0000002C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002E System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000002F System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000030 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000031 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000032 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000033 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000034 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000035 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000036 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000037 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000038 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000039 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x0000003A System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x0000003B System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x0000003C System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003E System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003F System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x00000040 System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000041 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000042 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000043 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000044 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000045 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000046 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000047 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000048 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000049 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x0000004A System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x0000004B TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x0000004C System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x0000004D System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x0000004E System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x0000004F System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x00000050 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x00000051 TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000052 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x00000053 System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000054 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000055 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000056 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x00000057 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x00000058 System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x00000059 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x0000005A TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000005B System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x0000005C System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x0000005D System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000005E System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000005F System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000060 System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x00000061 System.Boolean System.Linq.Set`1::Add(TElement)
// 0x00000062 System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x00000063 System.Void System.Linq.Set`1::Resize()
// 0x00000064 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x00000065 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x00000066 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000067 System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000068 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000069 System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x0000006A System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x0000006B System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x0000006C System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x0000006D TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x0000006E System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x0000006F System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x00000070 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000071 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000072 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x00000073 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x00000074 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x00000075 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x00000076 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x00000077 System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x00000078 System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x00000079 System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x0000007A System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x0000007B TElement[] System.Linq.Buffer`1::ToArray()
// 0x0000007C System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression::get_NodeType()
extern void Expression_get_NodeType_m46D2F5DD4F481536355CF1096212D8BD011EFA6A (void);
// 0x0000007D System.Void System.Linq.Expressions.Expression::.cctor()
extern void Expression__cctor_m69557D69429E0BF3BEDD70DD10F659876E6968E3 (void);
// 0x0000007E System.Exception System.Linq.Expressions.Error::ExtensionNodeMustOverrideProperty(System.Object)
extern void Error_ExtensionNodeMustOverrideProperty_mAC352E09338C9957B04ECD67B350317839E2C9DE (void);
// 0x0000007F System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::get_Body()
extern void LambdaExpression_get_Body_m595A485419E2F0AA13FC2695DEBD99ED9712D042 (void);
// 0x00000080 System.Reflection.MemberInfo System.Linq.Expressions.MemberExpression::get_Member()
extern void MemberExpression_get_Member_m42D967F01204B3337C76BC2C679C42922ACF2D2C (void);
// 0x00000081 System.Linq.Expressions.Expression System.Linq.Expressions.MemberExpression::get_Expression()
extern void MemberExpression_get_Expression_mF45071AA01F3FD9644B8047DC9EFFBBF3895D03A (void);
// 0x00000082 System.Reflection.MemberInfo System.Linq.Expressions.MemberExpression::GetMember()
extern void MemberExpression_GetMember_mC6C63FFBC40F36F3C693E15A7CFB8EBCEBCE0D87 (void);
// 0x00000083 System.String System.Linq.Expressions.Strings::ExtensionNodeMustOverrideProperty(System.Object)
extern void Strings_ExtensionNodeMustOverrideProperty_m6E6F9F848EDD10684FF52BF21D95D84983E92CFC (void);
// 0x00000084 System.Void System.Dynamic.Utils.CacheDict`2::.ctor(System.Int32)
// 0x00000085 System.Int32 System.Dynamic.Utils.CacheDict`2::AlignSize(System.Int32)
// 0x00000086 System.Exception System.Dynamic.Utils.ContractUtils::get_Unreachable()
extern void ContractUtils_get_Unreachable_m814C0ABAB566942A64D62EE4BF63B9C75B8BDF5D (void);
// 0x00000087 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000088 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000089 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x0000008A System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x0000008B System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x0000008C System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x0000008D System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x0000008E System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x0000008F System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x00000090 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x00000091 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x00000092 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000093 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000094 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000095 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x00000096 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x00000097 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x00000098 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x00000099 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x0000009A System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x0000009B System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x0000009C System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x0000009D System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x0000009E System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x0000009F System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000A0 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000A1 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000A2 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000A3 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[163] = 
{
	SR_Format_m7A21873FD59FBF9CD36B4F733BB49D1F470F8829,
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Expression_get_NodeType_m46D2F5DD4F481536355CF1096212D8BD011EFA6A,
	Expression__cctor_m69557D69429E0BF3BEDD70DD10F659876E6968E3,
	Error_ExtensionNodeMustOverrideProperty_mAC352E09338C9957B04ECD67B350317839E2C9DE,
	LambdaExpression_get_Body_m595A485419E2F0AA13FC2695DEBD99ED9712D042,
	MemberExpression_get_Member_m42D967F01204B3337C76BC2C679C42922ACF2D2C,
	MemberExpression_get_Expression_mF45071AA01F3FD9644B8047DC9EFFBBF3895D03A,
	MemberExpression_GetMember_mC6C63FFBC40F36F3C693E15A7CFB8EBCEBCE0D87,
	Strings_ExtensionNodeMustOverrideProperty_m6E6F9F848EDD10684FF52BF21D95D84983E92CFC,
	NULL,
	NULL,
	ContractUtils_get_Unreachable_m814C0ABAB566942A64D62EE4BF63B9C75B8BDF5D,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[163] = 
{
	3537,
	3934,
	3934,
	4072,
	4072,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	2504,
	4099,
	3934,
	2521,
	2521,
	2521,
	2521,
	3934,
	-1,
	-1,
	4072,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[51] = 
{
	{ 0x02000005, { 77, 4 } },
	{ 0x02000006, { 81, 9 } },
	{ 0x02000007, { 92, 7 } },
	{ 0x02000008, { 101, 10 } },
	{ 0x02000009, { 113, 11 } },
	{ 0x0200000A, { 127, 9 } },
	{ 0x0200000B, { 139, 12 } },
	{ 0x0200000C, { 154, 1 } },
	{ 0x0200000D, { 155, 2 } },
	{ 0x0200000E, { 157, 12 } },
	{ 0x0200000F, { 169, 11 } },
	{ 0x02000011, { 180, 8 } },
	{ 0x02000013, { 188, 3 } },
	{ 0x02000014, { 193, 5 } },
	{ 0x02000015, { 198, 7 } },
	{ 0x02000016, { 205, 3 } },
	{ 0x02000017, { 208, 7 } },
	{ 0x02000018, { 215, 4 } },
	{ 0x02000023, { 219, 3 } },
	{ 0x02000026, { 222, 21 } },
	{ 0x02000028, { 243, 2 } },
	{ 0x06000006, { 0, 10 } },
	{ 0x06000007, { 10, 10 } },
	{ 0x06000008, { 20, 5 } },
	{ 0x06000009, { 25, 5 } },
	{ 0x0600000A, { 30, 1 } },
	{ 0x0600000B, { 31, 2 } },
	{ 0x0600000C, { 33, 2 } },
	{ 0x0600000D, { 35, 1 } },
	{ 0x0600000E, { 36, 1 } },
	{ 0x0600000F, { 37, 2 } },
	{ 0x06000010, { 39, 3 } },
	{ 0x06000011, { 42, 2 } },
	{ 0x06000012, { 44, 4 } },
	{ 0x06000013, { 48, 3 } },
	{ 0x06000014, { 51, 4 } },
	{ 0x06000015, { 55, 3 } },
	{ 0x06000016, { 58, 3 } },
	{ 0x06000017, { 61, 1 } },
	{ 0x06000018, { 62, 3 } },
	{ 0x06000019, { 65, 2 } },
	{ 0x0600001A, { 67, 3 } },
	{ 0x0600001B, { 70, 2 } },
	{ 0x0600001C, { 72, 5 } },
	{ 0x0600002C, { 90, 2 } },
	{ 0x06000031, { 99, 2 } },
	{ 0x06000036, { 111, 2 } },
	{ 0x0600003C, { 124, 3 } },
	{ 0x06000041, { 136, 3 } },
	{ 0x06000046, { 151, 3 } },
	{ 0x06000068, { 191, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[245] = 
{
	{ (Il2CppRGCTXDataType)2, 1883 },
	{ (Il2CppRGCTXDataType)3, 7345 },
	{ (Il2CppRGCTXDataType)2, 3208 },
	{ (Il2CppRGCTXDataType)2, 2750 },
	{ (Il2CppRGCTXDataType)3, 14792 },
	{ (Il2CppRGCTXDataType)2, 2000 },
	{ (Il2CppRGCTXDataType)2, 2757 },
	{ (Il2CppRGCTXDataType)3, 14831 },
	{ (Il2CppRGCTXDataType)2, 2752 },
	{ (Il2CppRGCTXDataType)3, 14799 },
	{ (Il2CppRGCTXDataType)2, 1884 },
	{ (Il2CppRGCTXDataType)3, 7346 },
	{ (Il2CppRGCTXDataType)2, 3229 },
	{ (Il2CppRGCTXDataType)2, 2759 },
	{ (Il2CppRGCTXDataType)3, 14838 },
	{ (Il2CppRGCTXDataType)2, 2019 },
	{ (Il2CppRGCTXDataType)2, 2767 },
	{ (Il2CppRGCTXDataType)3, 14895 },
	{ (Il2CppRGCTXDataType)2, 2763 },
	{ (Il2CppRGCTXDataType)3, 14864 },
	{ (Il2CppRGCTXDataType)2, 680 },
	{ (Il2CppRGCTXDataType)3, 56 },
	{ (Il2CppRGCTXDataType)3, 57 },
	{ (Il2CppRGCTXDataType)2, 1223 },
	{ (Il2CppRGCTXDataType)3, 5605 },
	{ (Il2CppRGCTXDataType)2, 681 },
	{ (Il2CppRGCTXDataType)3, 68 },
	{ (Il2CppRGCTXDataType)3, 69 },
	{ (Il2CppRGCTXDataType)2, 1234 },
	{ (Il2CppRGCTXDataType)3, 5609 },
	{ (Il2CppRGCTXDataType)3, 17283 },
	{ (Il2CppRGCTXDataType)2, 686 },
	{ (Il2CppRGCTXDataType)3, 102 },
	{ (Il2CppRGCTXDataType)2, 2443 },
	{ (Il2CppRGCTXDataType)3, 11944 },
	{ (Il2CppRGCTXDataType)3, 6144 },
	{ (Il2CppRGCTXDataType)3, 17252 },
	{ (Il2CppRGCTXDataType)2, 682 },
	{ (Il2CppRGCTXDataType)3, 74 },
	{ (Il2CppRGCTXDataType)2, 789 },
	{ (Il2CppRGCTXDataType)3, 1050 },
	{ (Il2CppRGCTXDataType)3, 1051 },
	{ (Il2CppRGCTXDataType)2, 2001 },
	{ (Il2CppRGCTXDataType)3, 7992 },
	{ (Il2CppRGCTXDataType)2, 1809 },
	{ (Il2CppRGCTXDataType)2, 1374 },
	{ (Il2CppRGCTXDataType)2, 1478 },
	{ (Il2CppRGCTXDataType)2, 1570 },
	{ (Il2CppRGCTXDataType)2, 1479 },
	{ (Il2CppRGCTXDataType)2, 1571 },
	{ (Il2CppRGCTXDataType)3, 5607 },
	{ (Il2CppRGCTXDataType)2, 1810 },
	{ (Il2CppRGCTXDataType)2, 1375 },
	{ (Il2CppRGCTXDataType)2, 1480 },
	{ (Il2CppRGCTXDataType)2, 1572 },
	{ (Il2CppRGCTXDataType)2, 1481 },
	{ (Il2CppRGCTXDataType)2, 1573 },
	{ (Il2CppRGCTXDataType)3, 5608 },
	{ (Il2CppRGCTXDataType)2, 1808 },
	{ (Il2CppRGCTXDataType)2, 1477 },
	{ (Il2CppRGCTXDataType)2, 1569 },
	{ (Il2CppRGCTXDataType)2, 1467 },
	{ (Il2CppRGCTXDataType)2, 1468 },
	{ (Il2CppRGCTXDataType)2, 1566 },
	{ (Il2CppRGCTXDataType)3, 5604 },
	{ (Il2CppRGCTXDataType)2, 1373 },
	{ (Il2CppRGCTXDataType)2, 1475 },
	{ (Il2CppRGCTXDataType)2, 1476 },
	{ (Il2CppRGCTXDataType)2, 1568 },
	{ (Il2CppRGCTXDataType)3, 5606 },
	{ (Il2CppRGCTXDataType)2, 1372 },
	{ (Il2CppRGCTXDataType)3, 17239 },
	{ (Il2CppRGCTXDataType)3, 4916 },
	{ (Il2CppRGCTXDataType)2, 1098 },
	{ (Il2CppRGCTXDataType)2, 1470 },
	{ (Il2CppRGCTXDataType)2, 1567 },
	{ (Il2CppRGCTXDataType)2, 1645 },
	{ (Il2CppRGCTXDataType)3, 7347 },
	{ (Il2CppRGCTXDataType)3, 7349 },
	{ (Il2CppRGCTXDataType)2, 475 },
	{ (Il2CppRGCTXDataType)3, 7348 },
	{ (Il2CppRGCTXDataType)3, 7357 },
	{ (Il2CppRGCTXDataType)2, 1887 },
	{ (Il2CppRGCTXDataType)2, 2753 },
	{ (Il2CppRGCTXDataType)3, 14800 },
	{ (Il2CppRGCTXDataType)3, 7358 },
	{ (Il2CppRGCTXDataType)2, 1524 },
	{ (Il2CppRGCTXDataType)2, 1598 },
	{ (Il2CppRGCTXDataType)3, 5616 },
	{ (Il2CppRGCTXDataType)3, 17225 },
	{ (Il2CppRGCTXDataType)2, 2764 },
	{ (Il2CppRGCTXDataType)3, 14865 },
	{ (Il2CppRGCTXDataType)3, 7350 },
	{ (Il2CppRGCTXDataType)2, 1886 },
	{ (Il2CppRGCTXDataType)2, 2751 },
	{ (Il2CppRGCTXDataType)3, 14793 },
	{ (Il2CppRGCTXDataType)3, 5615 },
	{ (Il2CppRGCTXDataType)3, 7351 },
	{ (Il2CppRGCTXDataType)3, 17224 },
	{ (Il2CppRGCTXDataType)2, 2760 },
	{ (Il2CppRGCTXDataType)3, 14839 },
	{ (Il2CppRGCTXDataType)3, 7364 },
	{ (Il2CppRGCTXDataType)2, 1888 },
	{ (Il2CppRGCTXDataType)2, 2758 },
	{ (Il2CppRGCTXDataType)3, 14832 },
	{ (Il2CppRGCTXDataType)3, 8044 },
	{ (Il2CppRGCTXDataType)3, 3922 },
	{ (Il2CppRGCTXDataType)3, 5617 },
	{ (Il2CppRGCTXDataType)3, 3921 },
	{ (Il2CppRGCTXDataType)3, 7365 },
	{ (Il2CppRGCTXDataType)3, 17226 },
	{ (Il2CppRGCTXDataType)2, 2768 },
	{ (Il2CppRGCTXDataType)3, 14896 },
	{ (Il2CppRGCTXDataType)3, 7378 },
	{ (Il2CppRGCTXDataType)2, 1890 },
	{ (Il2CppRGCTXDataType)2, 2766 },
	{ (Il2CppRGCTXDataType)3, 14867 },
	{ (Il2CppRGCTXDataType)3, 7379 },
	{ (Il2CppRGCTXDataType)2, 1527 },
	{ (Il2CppRGCTXDataType)2, 1601 },
	{ (Il2CppRGCTXDataType)3, 5621 },
	{ (Il2CppRGCTXDataType)3, 5620 },
	{ (Il2CppRGCTXDataType)2, 2755 },
	{ (Il2CppRGCTXDataType)3, 14802 },
	{ (Il2CppRGCTXDataType)3, 17233 },
	{ (Il2CppRGCTXDataType)2, 2765 },
	{ (Il2CppRGCTXDataType)3, 14866 },
	{ (Il2CppRGCTXDataType)3, 7371 },
	{ (Il2CppRGCTXDataType)2, 1889 },
	{ (Il2CppRGCTXDataType)2, 2762 },
	{ (Il2CppRGCTXDataType)3, 14841 },
	{ (Il2CppRGCTXDataType)3, 5619 },
	{ (Il2CppRGCTXDataType)3, 5618 },
	{ (Il2CppRGCTXDataType)3, 7372 },
	{ (Il2CppRGCTXDataType)2, 2754 },
	{ (Il2CppRGCTXDataType)3, 14801 },
	{ (Il2CppRGCTXDataType)3, 17232 },
	{ (Il2CppRGCTXDataType)2, 2761 },
	{ (Il2CppRGCTXDataType)3, 14840 },
	{ (Il2CppRGCTXDataType)3, 7385 },
	{ (Il2CppRGCTXDataType)2, 1891 },
	{ (Il2CppRGCTXDataType)2, 2770 },
	{ (Il2CppRGCTXDataType)3, 14898 },
	{ (Il2CppRGCTXDataType)3, 8045 },
	{ (Il2CppRGCTXDataType)3, 3924 },
	{ (Il2CppRGCTXDataType)3, 5623 },
	{ (Il2CppRGCTXDataType)3, 5622 },
	{ (Il2CppRGCTXDataType)3, 3923 },
	{ (Il2CppRGCTXDataType)3, 7386 },
	{ (Il2CppRGCTXDataType)2, 2756 },
	{ (Il2CppRGCTXDataType)3, 14803 },
	{ (Il2CppRGCTXDataType)3, 17234 },
	{ (Il2CppRGCTXDataType)2, 2769 },
	{ (Il2CppRGCTXDataType)3, 14897 },
	{ (Il2CppRGCTXDataType)3, 5612 },
	{ (Il2CppRGCTXDataType)3, 5613 },
	{ (Il2CppRGCTXDataType)3, 5624 },
	{ (Il2CppRGCTXDataType)3, 105 },
	{ (Il2CppRGCTXDataType)3, 104 },
	{ (Il2CppRGCTXDataType)2, 1519 },
	{ (Il2CppRGCTXDataType)2, 1594 },
	{ (Il2CppRGCTXDataType)3, 5614 },
	{ (Il2CppRGCTXDataType)2, 1533 },
	{ (Il2CppRGCTXDataType)2, 1613 },
	{ (Il2CppRGCTXDataType)3, 107 },
	{ (Il2CppRGCTXDataType)2, 613 },
	{ (Il2CppRGCTXDataType)2, 687 },
	{ (Il2CppRGCTXDataType)3, 103 },
	{ (Il2CppRGCTXDataType)3, 106 },
	{ (Il2CppRGCTXDataType)3, 76 },
	{ (Il2CppRGCTXDataType)2, 2545 },
	{ (Il2CppRGCTXDataType)3, 13578 },
	{ (Il2CppRGCTXDataType)2, 1516 },
	{ (Il2CppRGCTXDataType)2, 1592 },
	{ (Il2CppRGCTXDataType)3, 13579 },
	{ (Il2CppRGCTXDataType)3, 78 },
	{ (Il2CppRGCTXDataType)2, 472 },
	{ (Il2CppRGCTXDataType)2, 683 },
	{ (Il2CppRGCTXDataType)3, 75 },
	{ (Il2CppRGCTXDataType)3, 77 },
	{ (Il2CppRGCTXDataType)3, 4949 },
	{ (Il2CppRGCTXDataType)2, 1112 },
	{ (Il2CppRGCTXDataType)2, 3320 },
	{ (Il2CppRGCTXDataType)3, 13575 },
	{ (Il2CppRGCTXDataType)3, 13576 },
	{ (Il2CppRGCTXDataType)2, 1659 },
	{ (Il2CppRGCTXDataType)3, 13577 },
	{ (Il2CppRGCTXDataType)2, 408 },
	{ (Il2CppRGCTXDataType)2, 684 },
	{ (Il2CppRGCTXDataType)3, 88 },
	{ (Il2CppRGCTXDataType)3, 11931 },
	{ (Il2CppRGCTXDataType)2, 2444 },
	{ (Il2CppRGCTXDataType)3, 11945 },
	{ (Il2CppRGCTXDataType)2, 790 },
	{ (Il2CppRGCTXDataType)3, 1052 },
	{ (Il2CppRGCTXDataType)3, 11937 },
	{ (Il2CppRGCTXDataType)3, 3896 },
	{ (Il2CppRGCTXDataType)2, 506 },
	{ (Il2CppRGCTXDataType)3, 11932 },
	{ (Il2CppRGCTXDataType)2, 2440 },
	{ (Il2CppRGCTXDataType)3, 1092 },
	{ (Il2CppRGCTXDataType)2, 807 },
	{ (Il2CppRGCTXDataType)2, 1071 },
	{ (Il2CppRGCTXDataType)3, 3902 },
	{ (Il2CppRGCTXDataType)3, 11933 },
	{ (Il2CppRGCTXDataType)3, 3891 },
	{ (Il2CppRGCTXDataType)3, 3892 },
	{ (Il2CppRGCTXDataType)3, 3890 },
	{ (Il2CppRGCTXDataType)3, 3893 },
	{ (Il2CppRGCTXDataType)2, 1067 },
	{ (Il2CppRGCTXDataType)2, 3281 },
	{ (Il2CppRGCTXDataType)3, 5611 },
	{ (Il2CppRGCTXDataType)3, 3895 },
	{ (Il2CppRGCTXDataType)2, 1452 },
	{ (Il2CppRGCTXDataType)3, 3894 },
	{ (Il2CppRGCTXDataType)2, 1376 },
	{ (Il2CppRGCTXDataType)2, 3232 },
	{ (Il2CppRGCTXDataType)2, 1494 },
	{ (Il2CppRGCTXDataType)2, 1574 },
	{ (Il2CppRGCTXDataType)3, 1063 },
	{ (Il2CppRGCTXDataType)2, 792 },
	{ (Il2CppRGCTXDataType)2, 3288 },
	{ (Il2CppRGCTXDataType)3, 4932 },
	{ (Il2CppRGCTXDataType)2, 1106 },
	{ (Il2CppRGCTXDataType)3, 6001 },
	{ (Il2CppRGCTXDataType)3, 6002 },
	{ (Il2CppRGCTXDataType)3, 6007 },
	{ (Il2CppRGCTXDataType)2, 1654 },
	{ (Il2CppRGCTXDataType)3, 6004 },
	{ (Il2CppRGCTXDataType)3, 17702 },
	{ (Il2CppRGCTXDataType)2, 1073 },
	{ (Il2CppRGCTXDataType)3, 3914 },
	{ (Il2CppRGCTXDataType)1, 1449 },
	{ (Il2CppRGCTXDataType)2, 3244 },
	{ (Il2CppRGCTXDataType)3, 6003 },
	{ (Il2CppRGCTXDataType)1, 3244 },
	{ (Il2CppRGCTXDataType)1, 1654 },
	{ (Il2CppRGCTXDataType)2, 3318 },
	{ (Il2CppRGCTXDataType)2, 3244 },
	{ (Il2CppRGCTXDataType)3, 6008 },
	{ (Il2CppRGCTXDataType)3, 6006 },
	{ (Il2CppRGCTXDataType)3, 6005 },
	{ (Il2CppRGCTXDataType)2, 345 },
	{ (Il2CppRGCTXDataType)3, 3925 },
	{ (Il2CppRGCTXDataType)2, 485 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	163,
	s_methodPointers,
	s_InvokerIndices,
	0,
	NULL,
	51,
	s_rgctxIndices,
	245,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
