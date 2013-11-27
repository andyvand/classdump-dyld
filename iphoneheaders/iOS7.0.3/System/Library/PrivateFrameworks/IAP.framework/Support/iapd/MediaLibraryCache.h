/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:41:47 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iapd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <iapd/iapd-Structs.h>
@class NSMutableDictionary;

@interface MediaLibraryCache : NSObject {

	NSMutableDictionary* _itemCaches;

}
-(id)collectionsForProperty:(id)arg1 ;
-(void)setCollections:(id)arg1 forProperty:(id)arg2 ;
-(id)globalItemCountForProperty:(id)arg1 ;
-(void)setGlobalItemCount:(unsigned)arg1 ForProperty:(id)arg2 ;
-(id)itemNamesForRange:(NSRange)arg1 forProperty:(id)arg2 ;
-(void)setItemNames:(id)arg1 forRange:(NSRange)arg2 forProperty:(id)arg3 ;
-(id)itemCountForProperty:(id)arg1 ;
-(void)setItemCount:(unsigned)arg1 forProperty:(id)arg2 ;
-(void)invalidateMediaItem:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)reset;
@end
