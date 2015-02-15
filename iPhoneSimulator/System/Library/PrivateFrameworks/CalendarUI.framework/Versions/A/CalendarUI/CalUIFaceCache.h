/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:52 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSCache.h>

@class CalUIFace, NSMutableSet;

@interface CalUIFaceCache : NSCache {

	CalUIFace* _defaultFace;
	CalUIFace* _defaultFaceSmall;
	NSMutableSet* _pendingRequests;

}

@property (retain) CalUIFace * defaultFace;                     //@synthesize defaultFace=_defaultFace - In the implementation block
@property (retain) CalUIFace * defaultFaceSmall;                //@synthesize defaultFaceSmall=_defaultFaceSmall - In the implementation block
@property (retain) NSMutableSet * pendingRequests;              //@synthesize pendingRequests=_pendingRequests - In the implementation block
+(id)faceCache;
-(void)setPendingRequests:(NSMutableSet *)arg1 ;
-(NSMutableSet *)pendingRequests;
-(id)faceForManagedMessage:(id)arg1 withSize:(double)arg2 ;
-(CalUIFace *)defaultFace;
-(void)setDefaultFace:(CalUIFace *)arg1 ;
-(CalUIFace *)defaultFaceSmall;
-(void)setDefaultFaceSmall:(CalUIFace *)arg1 ;
-(id)init;
@end

