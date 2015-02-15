/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:15:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Xcode.app/Contents/Applications/Accessibility Inspector.app/Contents/MacOS/Accessibility Inspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Accessibility Inspector/Accessibility Inspector-Structs.h>
@class NSString, NSArray, OutlineRecord;

@interface UIElement : NSObject {

	AXUIElementRef _element;
	NSString* _role;
	NSString* _subrole;
	NSString* _elementClassName;
	char _isIgnored;
	NSString* _bestDescription;
	UIElement* _parentElement;
	CGRect _frame;
	NSArray* _attributeRecords;
	NSArray* _actionRecords;
	NSArray* _parameterizedAttributeRecords;
	NSArray* _errorRecords;
	OutlineRecord* _childrenRecord;

}

@property (retain,readonly) NSArray * lineage; 
@property (retain) UIElement * parentElement;                          //@synthesize parentElement=_parentElement - In the implementation block
@property (readonly) NSArray * childrenElements; 
@property (readonly) NSString * combinedRole; 
@property (assign) CGRect frame;                                       //@synthesize frame=_frame - In the implementation block
@property (copy) NSArray * attributeRecords;                           //@synthesize attributeRecords=_attributeRecords - In the implementation block
@property (copy) NSArray * parameterizedAttributeRecords;              //@synthesize parameterizedAttributeRecords=_parameterizedAttributeRecords - In the implementation block
@property (copy) NSArray * actionRecords;                              //@synthesize actionRecords=_actionRecords - In the implementation block
@property (copy) NSArray * errorRecords;                               //@synthesize errorRecords=_errorRecords - In the implementation block
@property (retain) OutlineRecord * childrenRecord;                     //@synthesize childrenRecord=_childrenRecord - In the implementation block
@property (copy) NSString * role;                                      //@synthesize role=_role - In the implementation block
@property (copy) NSString * subrole;                                   //@synthesize subrole=_subrole - In the implementation block
@property (copy) NSString * elementClassName;                          //@synthesize elementClassName=_elementClassName - In the implementation block
@property (assign) char isIgnored;                                     //@synthesize isIgnored=_isIgnored - In the implementation block
@property (copy) NSString * bestDescription;                           //@synthesize bestDescription=_bestDescription - In the implementation block
@property (retain,readonly) NSArray * anscestors; 
+(id)elementAtPosition:(CGPoint)arg1 showIgnored:(char)arg2 ;
+(id)systemWideElement;
+(CGPoint)carbonScreenPointFromCocoaScreenPoint:(CGPoint)arg1 ;
+(id)descriptionForValue:(id)arg1 valueType:(id)arg2 ;
+(void*)newAXValueForObject:(id)arg1 ;
+(void*)newAXArrayForArray:(id)arg1 ;
+(id)objectForAXValue:(void*)arg1 valueType:(id*)arg2 childRecords:(id*)arg3 ;
+(id)objectForAXValue:(void*)arg1 valueType:(id*)arg2 childRecords:(id*)arg3 startingIndex:(unsigned long long)arg4 ;
+(id)convertArray:(CFArrayRef)arg1 childRecords:(id*)arg2 startingIndex:(unsigned long long)arg3 ;
+(id)convertDictionary:(CFDictionaryRef)arg1 childRecords:(id*)arg2 ;
+(id)clientErrorRecordForProperty:(id)arg1 errorCode:(int)arg2 ;
+(id)_lineageForElementRecord:(id)arg1 parent:(id)arg2 visitedDecendants:(id)arg3 ;
+(id)_lineageForElementRecord:(id)arg1 parent:(id)arg2 ;
+(id)descriptionForValueRecord:(id)arg1 ;
+(void)initialize;
-(char)isNonVisualElement;
-(id)firstChildElement;
-(id)siblingElementMovingForward:(char)arg1 ;
-(AXUIElementRef)axElement;
-(NSString *)combinedRole;
-(NSArray *)childrenElements;
-(id)allCategoriesIncludesErrors:(char)arg1 ;
-(NSString *)elementClassName;
-(char)isIgnored;
-(void)setElementClassName:(NSString *)arg1 ;
-(id)descriptionOfAction:(id)arg1 ;
-(id)valueForAttribute:(id)arg1 parameter:(id)arg2 clientError:(int*)arg3 ;
-(CGRect)flippedScreenBounds:(CGRect)arg1 ;
-(char)_fetchValuesUsingFetchStyle:(long long)arg1 visitedDecendants:(id)arg2 ;
-(id)attributeRecordForAttribute:(id)arg1 roleSpecification:(id)arg2 ;
-(void)setSubrole:(NSString *)arg1 ;
-(void)setIsIgnored:(char)arg1 ;
-(void)setParentElement:(UIElement *)arg1 ;
-(void)setChildrenRecord:(OutlineRecord *)arg1 ;
-(unsigned long long)indexOfChildElement:(id)arg1 ;
-(id)parameterizedAttributeRecordForAttribute:(id)arg1 role:(id)arg2 subrole:(id)arg3 ;
-(void)setParameterizedAttributeRecords:(NSArray *)arg1 ;
-(id)actionRecordForAction:(id)arg1 role:(id)arg2 subrole:(id)arg3 ;
-(void)setActionRecords:(NSArray *)arg1 ;
-(CGRect)screenRectFromFrameValue:(id)arg1 ;
-(CGRect)screenRectFromPositionValue:(id)arg1 sizeValue:(id)arg2 ;
-(void)setAttributeRecords:(NSArray *)arg1 ;
-(void)setErrorRecords:(NSArray *)arg1 ;
-(char)fetchValuesUsingFetchStyle:(long long)arg1 ;
-(NSArray *)attributeRecords;
-(id)lineageRecord;
-(NSArray *)actionRecords;
-(NSArray *)parameterizedAttributeRecords;
-(NSArray *)errorRecords;
-(OutlineRecord *)childrenRecord;
-(id)childRecords;
-(void)catchNilRoleAfterFetching;
-(NSArray *)anscestors;
-(unsigned long long)_fallbackIndexOfChildElement:(id)arg1 ;
-(id)valueForAttribute:(id)arg1 parameter:(id)arg2 ;
-(id)recordSubarrayOfArrayAttribute:(id)arg1 index:(unsigned long long)arg2 maxCount:(unsigned long long)arg3 ;
-(char)isApplicationElement;
-(char)isSystemWideElement;
-(NSString *)bestDescription;
-(void)setBestDescription:(NSString *)arg1 ;
-(NSArray *)lineage;
-(UIElement *)parentElement;
-(NSString *)role;
-(NSString *)subrole;
-(void)invalidateCachedValues;
-(void)setValue:(id)arg1 forAttribute:(id)arg2 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(id)description;
-(CGRect)frame;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithAXUIElement:(AXUIElementRef)arg1 ;
-(void)performAction:(id)arg1 ;
-(int)processIdentifier;
-(void)setRole:(NSString *)arg1 ;
@end
