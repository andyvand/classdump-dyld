/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:31:23 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/ML3Predicate.h>

@class ML3Predicate;

@interface ML3UnaryPredicate : ML3Predicate {

	ML3Predicate* _predicate;

}

@property (nonatomic,retain) ML3Predicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
+(id)predicateWithPredicate:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)setPredicate:(id)arg1 ;
-(id)predicate;
-(id)SQLJoinClausesForClass:(Class)arg1 ;
-(id)databaseStatementParameters;
-(id)predicateOptimizedForEntityClass:(Class)arg1 ;
-(id)initWithPredicate:(id)arg1 ;
-(void).cxx_destruct;
@end
