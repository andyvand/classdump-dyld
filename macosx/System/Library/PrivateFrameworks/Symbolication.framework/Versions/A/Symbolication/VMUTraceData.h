/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Versions/A/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@class NSMapTable, NSMutableSet;

@interface VMUTraceData : NSObject {

	NSMapTable* pcMap;
	NSMapTable* threadTraces;
	NSMapTable* libXrefs;
	NSMapTable* fnXrefs;
	NSMutableSet* threadIDnumbers;
	unsigned maxDepth;
	unsigned long long threadCount;

}
-(id)symbolForPC:(unsigned long long)arg1 ;
-(void)freeXrefTable:(id)arg1 ;
-(id)numberForThread:(unsigned)arg1 ;
-(unsigned long long)readAddressFromFile:(_sFILE*)arg1 has64bitAddresses:(char)arg2 needSwap:(char)arg3 ;
-(void)addOrIncrementXref:(id)arg1 withParent:(id)arg2 withChild:(id)arg3 withSelector:(SEL)arg4 commutative:(char)arg5 ;
-(void)generateXref:(id)arg1 withSelector:(SEL)arg2 commutative:(char)arg3 ;
-(void)addEvent:(id)arg1 ;
-(void)buildPCMap:(long long*)arg1 withNumPages:(unsigned)arg2 forTask:(unsigned)arg3 ;
-(id)initWithBacktraces:(id)arg1 forTask:(unsigned)arg2 ;
-(id)threadIDs;
-(id)traceForThread:(unsigned)arg1 ;
-(id)functionXref;
-(id)libraryXref;
-(void)printXrefs:(id)arg1 toString:(id)arg2 ;
-(unsigned)maxDepth;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(void)writeToFile:(_sFILE*)arg1 ;
-(char)readFromFile:(_sFILE*)arg1 ;
@end

