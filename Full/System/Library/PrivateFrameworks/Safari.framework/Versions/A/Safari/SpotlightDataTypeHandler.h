/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OldSpotlightDataSource, OldSpotlightDataWriter;
@class NSString, NSArray;

@interface SpotlightDataTypeHandler : NSObject {

	NSString* _type;
	id<OldSpotlightDataSource> _dataSource;
	id<OldSpotlightDataWriter> _dataWriter;
	NSArray* _itemsToDelete;
	NSArray* _itemsToAdd;
	char _fullUpdatePending;
	char _deleteOldCacheFiles;

}
-(void)setFullUpdatePending:(char)arg1 ;
-(id)initWithDataSource:(id)arg1 writer:(id)arg2 type:(id)arg3 ;
-(id)dataWriter;
-(char)isFullUpdatePending;
-(void)setShouldDeleteOldCacheFiles:(char)arg1 ;
-(void)setItemsToAdd:(id)arg1 ;
-(void)setItemsToDelete:(id)arg1 ;
-(id)itemsToDelete;
-(id)itemsToAdd;
-(char)shouldDeleteOldCacheFiles;
-(void)dealloc;
-(id)type;
-(id)dataSource;
@end

