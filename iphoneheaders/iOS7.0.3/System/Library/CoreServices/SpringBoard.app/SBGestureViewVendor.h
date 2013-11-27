/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:38:50 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class CPLRUDictionary;

@interface SBGestureViewVendor : NSObject {

	CPLRUDictionary* m_cache;

}
+(id)sharedInstance;
-(void)clearCacheForReason:(id)arg1 ;
-(void)clearCacheForApp:(id)arg1 reason:(id)arg2 ;
-(id)viewForApp:(id)arg1 gestureType:(unsigned)arg2 includeStatusBar:(BOOL)arg3 ;
-(id)viewForApp:(id)arg1 gestureType:(unsigned)arg2 includeStatusBar:(BOOL)arg3 decodeImage:(BOOL)arg4 ;
-(void)maskViewIfNeeded:(id)arg1 gestureType:(unsigned)arg2 viewType:(int)arg3 contextHostViewRequester:(id)arg4 app:(id)arg5 ;
-(void)dealloc;
-(id)init;
@end
