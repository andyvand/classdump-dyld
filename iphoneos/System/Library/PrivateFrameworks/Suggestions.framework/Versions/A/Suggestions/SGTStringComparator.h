/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:30 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Suggestions.framework/Versions/A/Suggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Suggestions/Suggestions-Structs.h>
@class NSArray, NSMutableArray, NSNumber, NSString;

@interface SGTStringComparator : NSObject {

	NSArray* _alignment;
	NSArray* _tailAlignment;
	double _logScore;
	char _hasLogScore;
	NSMutableArray* _allScoreCombinations;
	char hasEmptySentence;
	NSNumber* _spotlightScore;
	NSString* _stringA;
	NSString* _stringB;

}

@property (nonatomic,readonly) NSArray * alignment; 
@property (nonatomic,readonly) NSArray * perfectAlignment; 
@property (nonatomic,readonly) NSArray * tailAlignment; 
@property (nonatomic,copy) NSString * stringA;                              //@synthesize stringA=_stringA - In the implementation block
@property (nonatomic,copy) NSString * stringB;                              //@synthesize stringB=_stringB - In the implementation block
@property (nonatomic,readonly) NSArray * allScoreCombinations; 
-(void)dealloc;
-(id)description;
-(NSArray *)alignment;
-(id)spotlightScore;
-(id)alignmentLogScore;
-(unsigned long long)perfectAlignmentScore;
-(id)lastWordScore;
-(void)setStringA:(NSString *)arg1 ;
-(void)setStringB:(NSString *)arg1 ;
-(NSString *)stringB;
-(id)initWithStringA:(id)arg1 stringB:(id)arg2 attributeName:(id)arg3 evaluator:(MDSimpleQueryEvaluatorRef)arg4 ;
-(NSString *)stringA;
-(NSArray *)allScoreCombinations;
-(id)alignmentForThreshold:(int)arg1 ;
-(NSArray *)perfectAlignment;
-(NSArray *)tailAlignment;
-(id)computeGlobalScoreWithPredicate:(id)arg1 ;
-(id)initWithStringA:(id)arg1 stringB:(id)arg2 ;
-(id)alignedWordsWithFuzzyThreshold:(double)arg1 ;
-(id)bestGlobalScore;
-(id)worstGlobalScore;
-(id)averageGlobalScore;
-(id)last2WordsScore;
@end

