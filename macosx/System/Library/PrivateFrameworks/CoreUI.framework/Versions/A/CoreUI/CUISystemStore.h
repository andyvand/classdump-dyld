/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:46 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIStructuredThemeStore.h>
#import <CoreUI/NSCoding.h>

@interface CUISystemStore : CUIStructuredThemeStore <NSCoding>
+(char)isUsingSharedSystemCache;
-(char)getPhysicalColor:(colordef*)arg1 withName:(id)arg2 ;
-(char)assetExistsForKey:(renditionkeytoken*)arg1 ;
-(id)lookupAssetForKey:(renditionkeytoken*)arg1 ;
-(id)prefilteredAssetDataForKey:(renditionkeytoken*)arg1 ;
-(id)_systemCarBundle;
-(id)_systemCarPath;
-(id)assetDataFromCacheWithKeySignature:(id)arg1 ;
-(void)cacheAssetData:(id)arg1 forKey:(const renditionkeytoken*)arg2 withSignature:(id)arg3 ;
-(id)lookupAssetForKey:(renditionkeytoken*)arg1 withSignature:(id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)invalidateCache;
@end

