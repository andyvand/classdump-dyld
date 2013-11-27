/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:44:33 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSWPFontHeightCache : NSObject {

	list<unsigned long, std::__1::allocator<unsigned long> >* _fontHashList;
	map<unsigned long, TSWPFontHeightCacheEntry, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, TSWPFontHeightCacheEntry> > >* _fontHashToInfoMap;
	unsigned _cacheSize;
	unsigned _maxCacheSize;
	opaque_pthread_rwlock_t _lock;

}
+(id)sharedCache;
+(id)allocWithZone:(NSZoneRef)arg1 ;
+(id)_singletonAlloc;
-(SCD_Struct_TS600)fontHeightInfoForFont:(CTFontRef)arg1 ;
-(BOOL)p_findEntryForFont:(CTFontRef)arg1 outHeightInfo:(SCD_Struct_TS600*)arg2 collision:(BOOL*)arg3 ;
-(void)p_addEntryForFont:(CTFontRef)arg1 heightInfo:(const SCD_Struct_TS600*)arg2 ;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(id)init;
-(id)autorelease;
-(unsigned)retainCount;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id).cxx_construct;
-(void).cxx_destruct;
@end
