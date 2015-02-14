/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:34 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PASampleNodeDataSource;
@class NSArray;

@interface PASampleNode : NSObject {

	id<PASampleNodeDataSource> dataSource;
	PASampleNode* parent;
	NSArray* children;
	char isInSearchResult;

}

@property (assign) id<PASampleNodeDataSource> dataSource; 
@property (assign) char isInSearchResult; 
@property (assign) PASampleNode * parent; 
@property (retain) NSArray * children; 
-(void)setIsInSearchResult:(char)arg1 ;
-(char)isInSearchResult;
-(char)shouldDisplay;
-(unsigned long long)samples;
-(unsigned long long)responsibleSamples;
-(void)recalculateSamples;
-(id)init;
-(void)setDataSource:(id<PASampleNodeDataSource>)arg1 ;
-(id<PASampleNodeDataSource>)dataSource;
-(id)displayName;
-(PASampleNode *)parent;
-(NSArray *)children;
-(void)setChildren:(NSArray *)arg1 ;
-(void)setParent:(PASampleNode *)arg1 ;
@end

