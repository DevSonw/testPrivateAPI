/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSSStyle : TSPObject <NSCopying, TSKModel, TSKTransformableObject, TSSPropertySource, TSSPropertyValueValidator, TSSStyleClient, TSSStyleObject> {
    BOOL  mIsVariation;
    NSString * mName;
    TSSPropertyMap * mOverridePropertyMap;
    TSSStyle * mParent;
    NSString * mStyleIdentifier;
    TSSStylesheet * mStylesheet;
}

@property (nonatomic, readonly) TSSStyle *baseStyleForVariation;
@property (nonatomic, readonly) TSURetainedPointerSet *children;
@property (nonatomic, readonly) NSString *contentTag;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) TSURetainedPointerSet *descendants;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TSSStyle *firstIdentifiedAncestor;
@property (nonatomic, readonly) TSSStyle *firstNamedAncestor;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isIdentified;
@property (nonatomic, readonly) BOOL isNamed;
@property (nonatomic, readonly) BOOL isVariation;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) TSSPropertyMap *overridePropertyMap;
@property (nonatomic, readonly) TSSStyle *parent;
@property (nonatomic, readonly) TSSStyle *rootAncestor;
@property (nonatomic, readonly) TSSStyle *rootIdentifiedAncestor;
@property (nonatomic, readonly) NSString *styleIdentifier;
@property (nonatomic, readonly) TSSStylesheet *stylesheet;
@property (readonly) Class superclass;

+ (id)boxedDefaultValueForProperty:(int)arg1;
+ (double)defaultDoubleValueForProperty:(int)arg1;
+ (float)defaultFloatValueForProperty:(int)arg1;
+ (int)defaultIntValueForProperty:(int)arg1;
+ (id)defaultPropertyMap;
+ (id)defaultStyleWithContext:(id)arg1;
+ (id)defaultValueForProperty:(int)arg1;
+ (id)description;
+ (float)fontSizeForFontSize:(float)arg1 scalingFactor:(float)arg2;
+ (int)muxDefaultPropertyForSpecificProperty:(int)arg1;
+ (BOOL)needsObjectUUID;
+ (struct __CTFont { }*)pCreateFontWithName:(id)arg1 fontSize:(float)arg2;
+ (id)pReplacementForMissingFontName:(id)arg1 outBold:(int*)arg2 outItalic:(int*)arg3 outQuiet:(BOOL*)arg4;
+ (id)properties;
+ (id)propertiesAllowingNSNull;
+ (BOOL)shouldWarnWithPersistingWithoutStylesheet;
+ (BOOL)validateDoubleValue:(double*)arg1 forProperty:(int)arg2;
+ (BOOL)validateFloatValue:(float*)arg1 forProperty:(int)arg2;
+ (id)validateFontInPropertyMap:(id)arg1 parentStyle:(id)arg2 checkedFontMap:(id)arg3;
+ (id)validateFontName:(id)arg1 size:(float)arg2 bold:(BOOL)arg3 italic:(BOOL)arg4 checkedFontMap:(id)arg5 newFontName:(id*)arg6 newBold:(BOOL*)arg7 newItalic:(BOOL*)arg8;
+ (BOOL)validateIntValue:(int*)arg1 forProperty:(int)arg2;
+ (BOOL)validateIntValue:(int*)arg1 forProperty:(int)arg2 min:(int)arg3 max:(int)arg4;
+ (BOOL)validateIntValueAsBool:(int*)arg1 forProperty:(int)arg2;
+ (BOOL)validateObjectValue:(id*)arg1 withClass:(Class)arg2 forProperty:(int)arg3;

- (float)CGFloatValueForProperty:(int)arg1;
- (id)additionalPropertiesNeededForVariationWithPropertyMap:(id)arg1;
- (BOOL)allowsImplicitComponentOwnership;
- (id)baseStyleForVariation;
- (BOOL)boolValueForProperty:(int)arg1 defaultValue:(BOOL)arg2;
- (id)boxedObjectForProperty:(int)arg1;
- (id)boxedOverrideValueForProperty:(int)arg1;
- (id)boxedValueForProperty:(int)arg1;
- (id)boxedValueForProperty:(int)arg1 oldBoxedValue:(id)arg2 transformedByTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg3;
- (id)children;
- (id)componentRootObject;
- (void)constrainShadowForSwatchGeneration;
- (id)constrainShapeStyleForContext:(id)arg1;
- (void)constrainStrokeForSwatchGeneration;
- (BOOL)containsProperty:(int)arg1;
- (id)contentTag;
- (id)copyFlattenedWithContext:(id)arg1;
- (id)copyPropertyMap;
- (id)copyWithContext:(id)arg1;
- (id)copyWithContext:(id)arg1 includeParentProperties:(BOOL)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1 context:(id)arg2;
- (void)dealloc;
- (BOOL)definesProperty:(int)arg1;
- (id)descendants;
- (double)doubleValueForProperty:(int)arg1;
- (void)fadeReflectionForSwatchGeneration;
- (id)firstIdentifiedAncestor;
- (id)firstNamedAncestor;
- (float)floatValueForProperty:(int)arg1;
- (id)fullPropertyMap;
- (BOOL)hasEqualPropertyValues:(id)arg1;
- (BOOL)hasEqualValues:(id)arg1 forProperties:(id)arg2;
- (BOOL)hasEqualValuesToPropertyMap:(id)arg1 forProperties:(id)arg2;
- (unsigned int)hash;
- (id)init;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 name:(id)arg2 overridePropertyMap:(id)arg3 isVariation:(BOOL)arg4;
- (int)intValueForMUXedProperty:(int)arg1;
- (int)intValueForProperty:(int)arg1;
- (BOOL)isAncestorOf:(id)arg1;
- (BOOL)isChildOf:(id)arg1;
- (BOOL)isDescendentOf:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToStyle:(id)arg1 ignoreObjectContext:(BOOL)arg2;
- (BOOL)isEqualToStyle:(id)arg1 ignoreObjectContext:(BOOL)arg2 ignoreObjectUUID:(BOOL)arg3;
- (BOOL)isEqualToStyle:(id)arg1 ignoreObjectUUID:(BOOL)arg2;
- (BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (BOOL)isIdentified;
- (BOOL)isNamed;
- (BOOL)isParentOf:(id)arg1;
- (BOOL)isRelatedTo:(id)arg1;
- (BOOL)isVariation;
- (void)loadCharacterStylePropertiesIntoPropertyMap:(id)arg1 fromArchive:(const struct CharacterStylePropertiesArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[2]; float x4; bool x5; bool x6; bool x7; bool x8; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x9; struct Color {} *x10; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x11; int x12; int x13; int x14; int x15; float x16; float x17; int x18; bool x19; bool x20; bool x21; bool x22; struct Color {} *x23; struct ShadowArchive {} *x24; float x25; float x26; struct Color {} *x27; struct Color {} *x28; float x29; bool x30; bool x31; bool x32; bool x33; struct Color {} *x34; float x35; int x36; struct RepeatedPtrField<TSWP::FontFeatureArchive> { void **x_37_1_1; int x_37_1_2; int x_37_1_3; int x_37_1_4; } x37; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x38; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x39; }*)arg2 unarchiver:(id)arg3;
- (void)loadFromArchive:(const struct StyleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; struct Reference {} *x7; struct Reference {} *x8; bool x9; }*)arg1 unarchiver:(id)arg2;
- (void)loadParagraphStylePropertiesIntoPropertyMap:(id)arg1 fromArchive:(const struct ParagraphStylePropertiesArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[2]; int x4; float x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; struct Color {} *x7; bool x8; bool x9; bool x10; bool x11; float x12; float x13; bool x14; bool x15; bool x16; bool x17; struct LineSpacingArchive {} *x18; int x19; float x20; struct Point {} *x21; float x22; float x23; struct TabsArchive {} *x24; float x25; unsigned int x26; bool x27; bool x28; bool x29; bool x30; int x31; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x32; struct StrokeArchive {} *x33; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x34; bool x35; bool x36; bool x37; bool x38; int x39; struct Reference {} *x40; struct Reference {} *x41; int x42; }*)arg2 unarchiver:(id)arg3;
- (id)name;
- (id)newOverridePropertyMapWithPropertyMap:(id)arg1;
- (id)objectForProperty:(int)arg1;
- (id)overriddenProperties;
- (float)overrideCGFloatValueForProperty:(int)arg1;
- (unsigned int)overrideCount;
- (double)overrideDoubleValueForProperty:(int)arg1;
- (float)overrideFloatValueForProperty:(int)arg1;
- (int)overrideIntValueForProperty:(int)arg1;
- (id)overridePropertyMap;
- (BOOL)overridePropertyMapIsEqualTo:(id)arg1;
- (id)overridePropertyMapWithPropertyMap:(id)arg1 overridePropertyMap:(id)arg2 collapseSourceOverrides:(BOOL)arg3;
- (id)overrideValueForProperty:(int)arg1;
- (BOOL)overridesAnyProperty;
- (BOOL)overridesProperty:(int)arg1;
- (BOOL)p_hasEqualValuesTo:(id)arg1 forProperty:(int)arg2;
- (id)parent;
- (id)propertyMap;
- (id)propertyMapIgnoringStyle:(id)arg1;
- (id)propertyMapThatNeedsToBeTransformedWithTransformedObjects:(id)arg1;
- (id)referencedStyles;
- (void)removeAllValues;
- (void)removeValueForProperty:(int)arg1;
- (void)replaceReferencedStylesUsingBlock:(id /* block */)arg1;
- (id)rootAncestor;
- (id)rootIdentifiedAncestor;
- (void)saveCharacterStylePropertiesToArchive:(struct CharacterStylePropertiesArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[2]; float x4; bool x5; bool x6; bool x7; bool x8; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x9; struct Color {} *x10; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x11; int x12; int x13; int x14; int x15; float x16; float x17; int x18; bool x19; bool x20; bool x21; bool x22; struct Color {} *x23; struct ShadowArchive {} *x24; float x25; float x26; struct Color {} *x27; struct Color {} *x28; float x29; bool x30; bool x31; bool x32; bool x33; struct Color {} *x34; float x35; int x36; struct RepeatedPtrField<TSWP::FontFeatureArchive> { void **x_37_1_1; int x_37_1_2; int x_37_1_3; int x_37_1_4; } x37; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x38; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x39; }*)arg1 archiver:(id)arg2;
- (void)saveParagraphStylePropertiesToArchive:(struct ParagraphStylePropertiesArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[2]; int x4; float x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; struct Color {} *x7; bool x8; bool x9; bool x10; bool x11; float x12; float x13; bool x14; bool x15; bool x16; bool x17; struct LineSpacingArchive {} *x18; int x19; float x20; struct Point {} *x21; float x22; float x23; struct TabsArchive {} *x24; float x25; unsigned int x26; bool x27; bool x28; bool x29; bool x30; int x31; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x32; struct StrokeArchive {} *x33; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x34; bool x35; bool x36; bool x37; bool x38; int x39; struct Reference {} *x40; struct Reference {} *x41; int x42; }*)arg1 archiver:(id)arg2;
- (void)saveToArchive:(struct StyleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; struct Reference {} *x7; struct Reference {} *x8; bool x9; }*)arg1 archiver:(id)arg2;
- (void)setBoolValue:(BOOL)arg1 forProperty:(int)arg2;
- (void)setBoxedValue:(id)arg1 forProperty:(int)arg2;
- (void)setCGFloatValue:(float)arg1 forProperty:(int)arg2;
- (void)setDoubleValue:(double)arg1 forProperty:(int)arg2;
- (void)setFloatValue:(float)arg1 forProperty:(int)arg2;
- (void)setIntValue:(int)arg1 forProperty:(int)arg2;
- (void)setIsVariation:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setObjectUUID:(id)arg1;
- (void)setOverridePropertyMap:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setStyleIdentifier:(id)arg1;
- (void)setStylesheet:(id)arg1;
- (void)setValue:(id)arg1 forProperty:(int)arg2;
- (void)setValuesForProperties:(id)arg1;
- (id)styleIdentifier;
- (id)stylesheet;
- (BOOL)transformsFontSizes;
- (BOOL)validateDoubleValue:(double*)arg1 forProperty:(int)arg2;
- (BOOL)validateFloatValue:(float*)arg1 forProperty:(int)arg2;
- (id)validateFontWithCheckedFontMap:(id)arg1;
- (BOOL)validateIntValue:(int*)arg1 forProperty:(int)arg2;
- (BOOL)validateIntValue:(int*)arg1 forProperty:(int)arg2 min:(int)arg3 max:(int)arg4;
- (BOOL)validateIntValueAsBool:(int*)arg1 forProperty:(int)arg2;
- (BOOL)validateObjectValue:(id*)arg1 withClass:(Class)arg2 forProperty:(int)arg3;
- (id)valueForProperty:(int)arg1;
- (id)valuesForProperties:(id)arg1;

@end
