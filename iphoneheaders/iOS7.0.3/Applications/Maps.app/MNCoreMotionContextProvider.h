/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:35:09 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/MNMotionContextProvider.h>

@protocol MNMotionContextProviderDelegate;
@class CMActivityManager, ;

@interface MNCoreMotionContextProvider : NSObject <MNMotionContextProvider> {

	CMActivityManager* _activityManager;
	<MNMotionContextProviderDelegate>* _delegate;

}

@property (assign,nonatomic) <MNMotionContextProviderDelegate> * motionDelegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)motionDelegate;
-(void)setMotionDelegate:(id)arg1 ;
-(void)startMotionUpdates;
-(void)stopMotionUpdates;
-(void)dealloc;
@end
