/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Versions/A/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@class NSString;

@interface VMUVMRegion : NSObject {

	VMURange range;
	unsigned prot;
	unsigned maxProt;
	NSString* type;
	NSString* path;
	char summarized;
	char recalculate_pages_resident;
	unsigned char external_pager;
	unsigned char share_mode;
	int purgeable;
	unsigned long long virtual_pages;
	unsigned long long pages_resident;
	unsigned long long pages_shared_now_private;
	unsigned long long pages_swapped_out;
	unsigned long long pages_dirtied;
	unsigned long long ref_count;
	unsigned user_tag;
	unsigned long long object_id;
	unsigned nesting_depth;
	char is_submap;
	unsigned long long mallocBlockCount;
	unsigned mallocTypeFlag;
	unsigned long long pages_purgable_vol;
	unsigned long long pages_purgable_non_vol;
	unsigned long long pages_purgable_empty;

}
+(id)columnHeadersWithOptions:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 ;
-(id)descriptionWithOptions:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 ;
-(void)addInfoFromRegion:(id)arg1 ;
-(char)hasSameInfoAsRegion:(id)arg1 ;
-(id)breakAtLength:(unsigned long long)arg1 ;
-(unsigned)protection;
-(unsigned)maxProtection;
-(unsigned long long)virtualPageCount;
-(unsigned long long)residentPageCount;
-(unsigned long long)dirtyPageCount;
-(unsigned long long)sharedNowPrivatePageCount;
-(unsigned long long)swappedOutPageCount;
-(unsigned long long)purgeablePageCount;
-(char)isSubmap;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)path;
-(char)isEqual:(id)arg1 ;
-(id)type;
-(VMURange)range;
@end

