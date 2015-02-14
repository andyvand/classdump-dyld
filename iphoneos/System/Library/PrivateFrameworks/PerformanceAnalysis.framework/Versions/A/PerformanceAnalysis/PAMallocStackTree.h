/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:34 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PAMallocStackTreeFrame;

@interface PAMallocStackTree : NSObject {

	PAMallocStackTreeFrame* root;
	unsigned long long totalBytes;
	unsigned long long totalNodes;
	unsigned long long totalFrames;
	char isSymbolicated;

}

@property (readonly) unsigned long long totalBytes; 
@property (readonly) unsigned long long totalNodes; 
-(void)addMemAllocation:(id)arg1 atEquivalentBranchFromOtherTree:(id)arg2 ;
-(unsigned long long)totalFrames;
-(void)serializeToBuffer:(void*)arg1 WithStrings:(id)arg2 ;
-(unsigned long long)totalNodes;
-(id)stringForTreeWithMemoryStats:(char)arg1 ;
-(id)addAllocation:(id)arg1 WithTask:(unsigned)arg2 ;
-(void)symbolicateTreeWithTask:(unsigned)arg1 ;
-(id)initWithSerializedMallocStackTree:(id)arg1 NewIndexToMallocStackNodeOut:(id*)arg2 WithStringsIndexArray:(id*)arg3 ;
-(id)addBranchToTreeFromOtherTree:(id)arg1 ;
-(void)printTree;
-(unsigned long long)totalBytes;
-(id)init;
-(void)dealloc;
@end

