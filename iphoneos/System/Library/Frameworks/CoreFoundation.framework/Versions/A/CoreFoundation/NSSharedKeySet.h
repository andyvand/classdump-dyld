/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSFastEnumeration.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSCoding.h>

@interface NSSharedKeySet : NSObject <NSFastEnumeration, NSCopying, NSCoding> {

	char* _g;
	unsigned char _select;
	void* _rankTable;
	double _c;
	unsigned _M;
	unsigned _factor;
	unsigned _numKey;
	unsigned* _seeds;
	id* _keys;
	NSSharedKeySet* _subSharedKeySet;

}

@property (g) char* g;                                            //@synthesize g=_g - In the implementation block
@property (assign) unsigned char select;                          //@synthesize select=_select - In the implementation block
@property (assign) void* rankTable;                               //@synthesize rankTable=_rankTable - In the implementation block
@property (c) double c;                                           //@synthesize c=_c - In the implementation block
@property (M) unsigned M;                                         //@synthesize M=_M - In the implementation block
@property (assign) unsigned factor;                               //@synthesize factor=_factor - In the implementation block
@property (assign) unsigned numKey;                               //@synthesize numKey=_numKey - In the implementation block
@property (assign) unsigned* seeds;                               //@synthesize seeds=_seeds - In the implementation block
@property (assign) id* keys;                                      //@synthesize keys=_keys - In the implementation block
@property (retain) NSSharedKeySet * subSharedKeySet;              //@synthesize subSharedKeySet=_subSharedKeySet - In the implementation block
+(id)keySetWithKeys:(id)arg1 ;
-(unsigned char)select;
-(double)c;
-(void)setC:(double)arg1 ;
-(unsigned long long)indexForKey:(id)arg1 ;
-(void)setSelect:(unsigned char)arg1 ;
-(void)setM:(unsigned)arg1 ;
-(void)setFactor:(unsigned)arg1 ;
-(void)setNumKey:(unsigned)arg1 ;
-(void)setSeeds:(unsigned*)arg1 ;
-(void)setG:(char*)arg1 ;
-(void)setRankTable:(void*)arg1 ;
-(void)setSubSharedKeySet:(NSSharedKeySet *)arg1 ;
-(void)setKeys:(id*)arg1 ;
-(id)initWithKeys:(id*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)keySetCount;
-(unsigned long long)maximumIndex;
-(char*)g;
-(void*)rankTable;
-(unsigned)M;
-(unsigned)factor;
-(unsigned)numKey;
-(unsigned*)seeds;
-(NSSharedKeySet *)subSharedKeySet;
-(id)generateSubclassCode:(id)arg1 printChainOfKeySetIfPossible:(char)arg2 printSpecialCode:(unsigned long long)arg3 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS22*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)allKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEmpty;
-(id*)keys;
-(id)keyAtIndex:(unsigned long long)arg1 ;
@end

