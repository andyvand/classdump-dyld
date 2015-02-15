/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:46 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Versions/A/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@class VMUObjectIdentifier, VMUVMRegionIdentifier;

@interface VMUTaskMemoryScanner : NSObject {

	unsigned _task;
	VMUObjectIdentifier* _objectIdentifier;
	VMUVMRegionIdentifier* _regionIdentifier;
	VMUBlockNode* _blocks;
	unsigned _blocksCount;
	unsigned _blocksSize;
	VMURegionNode* _regions;
	unsigned _regionsCount;
	unsigned _regionsSize;
	VMURegionMap* _regionMap;
	VMUZoneNode* _zones;
	unsigned _zonesCount;
	unsigned _zonesSize;
	VMUThreadNode* _threads;
	unsigned _threadsCount;
	id* _classInfos;
	unsigned _classInfosCount;
	char _exactScanningEnabled;
	unsigned long long _maxInteriorOffset;
	int _scanningMask;
	/*^block*/id _referenceLogger;
	/*^block*/id _nodeLogger;

}

@property (assign,nonatomic) char exactScanningEnabled;                         //@synthesize exactScanningEnabled=_exactScanningEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long maxInteriorOffset;              //@synthesize maxInteriorOffset=_maxInteriorOffset - In the implementation block
@property (assign,nonatomic) int scanningMask;                                  //@synthesize scanningMask=_scanningMask - In the implementation block
@property (nonatomic,readonly) unsigned nodeCount;                              //@synthesize blocksCount=_blocksCount - In the implementation block
@property (nonatomic,readonly) unsigned mallocNodeCount; 
-(void)addRootNodesFromTask;
-(void)addMallocNodes:(id)arg1 ;
-(void)removeRootReachableNodes;
-(void)enumerateNodesWithBlock:(/*^block*/id)arg1 ;
-(void)detachFromTask;
-(void)setNodeScanningLogger:(/*^block*/id)arg1 ;
-(void)setReferenceScanningLogger:(/*^block*/id)arg1 ;
-(void)_withMemoryReaderBlock:(/*^block*/id)arg1 ;
-(void)_callRemoteMallocEnumerators:(unsigned)arg1 block:(/*^block*/id)arg2 ;
-(void)_fixupBlockIsas;
-(void)_sortBlocks;
-(void)_withOrderedNodeMapper:(/*^block*/id)arg1 ;
-(void)_orderedScanWithScanner:(/*^block*/id)arg1 recorder:(/*^block*/id)arg2 keepMapped:(BOOL)arg3 actions:(/*^block*/id)arg4 ;
-(void)_withScanningContext:(/*^block*/id)arg1 ;
-(SCD_Struct_VM10)nodeDetails:(unsigned)arg1 ;
-(void)scanNodesForReferences:(/*^block*/id)arg1 ;
-(void*)contentForNode:(unsigned)arg1 ;
-(id)nodeDescription:(unsigned)arg1 withOffset:(unsigned long long)arg2 ;
-(id)nodeDescription:(unsigned)arg1 ;
-(void)addMallocNodesFromTask;
-(void)orderedNodeTraversal:(int)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)scanNodesIntoGraph;
-(id)zoneNameForNode:(unsigned)arg1 ;
-(id)labelForMallocNode:(unsigned)arg1 ;
-(unsigned)mallocNodeCount;
-(id)referenceDescription:(SCD_Struct_VM11)arg1 withSourceNode:(unsigned)arg2 destinationNode:(unsigned)arg3 symbolicator:(CSTypeRef)arg4 alignmentSpacing:(unsigned)arg5 ;
-(unsigned long long)maxInteriorOffset;
-(void)setMaxInteriorOffset:(unsigned long long)arg1 ;
-(char)exactScanningEnabled;
-(void)setExactScanningEnabled:(char)arg1 ;
-(int)scanningMask;
-(void)setScanningMask:(int)arg1 ;
-(char)_suspend;
-(id)initWithTask:(unsigned)arg1 ;
-(unsigned)nodeCount;
-(void)dealloc;
@end

