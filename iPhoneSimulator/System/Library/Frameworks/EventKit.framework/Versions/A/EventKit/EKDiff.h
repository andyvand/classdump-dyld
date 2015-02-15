/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:39 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EKObject, NSSet, NSDictionary;

@interface EKDiff : NSObject {

	int _result;
	EKObject* _firstObject;
	EKObject* _secondObject;
	NSSet* _differentIdentityKeys;
	NSSet* _differentImmutableKeys;
	NSSet* _differentSingleValueKeys;
	NSSet* _differentRelationshipSingleValueKeys;
	NSSet* _differentRelationshipMultiValueKeys;
	NSDictionary* _relationshipMultiValueAdds;
	NSDictionary* _relationshipMultiValueRemoves;
	NSDictionary* _relationshipMultiValueModifies;
	NSDictionary* _relationshipSingleValueModifies;

}

@property (nonatomic,retain) EKObject * firstObject;                                      //@synthesize firstObject=_firstObject - In the implementation block
@property (nonatomic,retain) EKObject * secondObject;                                     //@synthesize secondObject=_secondObject - In the implementation block
@property (assign,nonatomic) int result;                                                  //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSSet * differentIdentityKeys;                               //@synthesize differentIdentityKeys=_differentIdentityKeys - In the implementation block
@property (nonatomic,retain) NSSet * differentImmutableKeys;                              //@synthesize differentImmutableKeys=_differentImmutableKeys - In the implementation block
@property (nonatomic,retain) NSSet * differentSingleValueKeys;                            //@synthesize differentSingleValueKeys=_differentSingleValueKeys - In the implementation block
@property (nonatomic,retain) NSSet * differentRelationshipSingleValueKeys;                //@synthesize differentRelationshipSingleValueKeys=_differentRelationshipSingleValueKeys - In the implementation block
@property (nonatomic,retain) NSSet * differentRelationshipMultiValueKeys;                 //@synthesize differentRelationshipMultiValueKeys=_differentRelationshipMultiValueKeys - In the implementation block
@property (nonatomic,retain) NSDictionary * relationshipMultiValueAdds;                   //@synthesize relationshipMultiValueAdds=_relationshipMultiValueAdds - In the implementation block
@property (nonatomic,retain) NSDictionary * relationshipMultiValueRemoves;                //@synthesize relationshipMultiValueRemoves=_relationshipMultiValueRemoves - In the implementation block
@property (nonatomic,retain) NSDictionary * relationshipMultiValueModifies;               //@synthesize relationshipMultiValueModifies=_relationshipMultiValueModifies - In the implementation block
@property (nonatomic,retain) NSDictionary * relationshipSingleValueModifies;              //@synthesize relationshipSingleValueModifies=_relationshipSingleValueModifies - In the implementation block
+(id)diffBetweenObject:(id)arg1 andObject:(id)arg2 ;
+(void)_populateSingleValueKeysForDiff:(id)arg1 ;
+(void)_populateImmutableKeysForDiff:(id)arg1 ;
+(void)_populateSingleValueRelationshipKeysForDiff:(id)arg1 ;
+(void)_populateMultiValueRelationshipKeysForDiff:(id)arg1 ;
+(void)_populateIdentityKeysForDiff:(id)arg1 ;
+(void)_addObject:(id)arg1 forKey:(id)arg2 toDiff:(id)arg3 ;
+(void)_addSummaryWithDepth:(long long)arg1 toMutableString:(id)arg2 forSingleValueKeys:(id)arg3 firstObject:(id)arg4 secondObject:(id)arg5 ;
+(void)_addSummaryWithDepth:(long long)arg1 toMutableString:(id)arg2 forRelationshipSingleValueKeys:(id)arg3 firstObject:(id)arg4 secondObject:(id)arg5 ;
+(void)_addSummaryWithDepth:(long long)arg1 toMutableString:(id)arg2 forRelationshipMultiValueKeys:(id)arg3 firstObject:(id)arg4 secondObject:(id)arg5 ;
+(id)_addChangeStarIfChangedKey:(id)arg1 onObject:(id)arg2 ;
+(void)_addPaddedHeaderToMutableString:(id)arg1 forKey:(id)arg2 withDepth:(long long)arg3 ;
+(id)_indentStringAtDepth:(long long)arg1 ;
-(id)changeSetForDiff;
-(id)summaryDictionary;
-(id)differentKeys;
-(void)setFirstObject:(EKObject *)arg1 ;
-(void)setSecondObject:(EKObject *)arg1 ;
-(EKObject *)secondObject;
-(id)initWithFirstObject:(id)arg1 secondObject:(id)arg2 ;
-(NSSet *)differentSingleValueKeys;
-(NSSet *)differentRelationshipSingleValueKeys;
-(NSSet *)differentRelationshipMultiValueKeys;
-(NSSet *)differentImmutableKeys;
-(NSSet *)differentIdentityKeys;
-(id)_nonNilObject;
-(void)setDifferentSingleValueKeys:(NSSet *)arg1 ;
-(void)setDifferentRelationshipSingleValueKeys:(NSSet *)arg1 ;
-(void)setRelationshipSingleValueModifies:(NSDictionary *)arg1 ;
-(void)setDifferentRelationshipMultiValueKeys:(NSSet *)arg1 ;
-(void)setRelationshipMultiValueAdds:(NSDictionary *)arg1 ;
-(void)setRelationshipMultiValueRemoves:(NSDictionary *)arg1 ;
-(void)setRelationshipMultiValueModifies:(NSDictionary *)arg1 ;
-(void)setDifferentIdentityKeys:(NSSet *)arg1 ;
-(void)setDifferentImmutableKeys:(NSSet *)arg1 ;
-(NSDictionary *)relationshipMultiValueModifies;
-(NSDictionary *)relationshipMultiValueAdds;
-(NSDictionary *)relationshipMultiValueRemoves;
-(id)_multiValueModifiedObjectsForKey:(id)arg1 ;
-(void)_summarizeDiffsBetweenFirstObject:(id)arg1 secondObject:(id)arg2 mutableString:(id)arg3 depth:(long long)arg4 ;
-(NSDictionary *)relationshipSingleValueModifies;
-(id)summaryString;
-(void)setResult:(int)arg1 ;
-(EKObject *)firstObject;
-(int)result;
@end

