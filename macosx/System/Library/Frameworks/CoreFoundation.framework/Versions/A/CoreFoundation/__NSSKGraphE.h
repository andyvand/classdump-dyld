/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@interface __NSSKGraphE : NSObject {

	edge* _edges;
	vertex* _vertices;
	unsigned long long _numV;
	unsigned long long _numE;
	unsigned long long _currE;
	unsigned long long _dump;
	unsigned long long _l_end;

}
-(id)initWithNumberOfVertices:(unsigned long long)arg1 numberOfEdges:(unsigned long long)arg2 ;
-(char)addEdgeWithH1:(unsigned long long)arg1 withH2:(unsigned long long)arg2 ;
-(unsigned long long)numOfEdges;
-(edge*)isAcyclic;
-(void)finalize;
-(void)dealloc;
-(char)isEmpty;
@end

