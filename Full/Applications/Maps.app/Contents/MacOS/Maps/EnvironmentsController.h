/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:39:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Maps.app/Contents/MacOS/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol EnvironmentsControllerDelegate;
@class NSArray;

@interface EnvironmentsController : NSObject {

	NSArray* _defaultEnvironmentInfos;
	NSArray* _environmentInfos;
	NSArray* _customEnvironmentInfos;
	char _enableCustomEnvironments;
	id<EnvironmentsControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<EnvironmentsControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initEnablingCustomEnvironments:(char)arg1 ;
-(void)reloadEnvironments;
-(id)environmentInfosForSection:(long long)arg1 ;
-(void)addCustomEnvironment:(id)arg1 ;
-(void)removeCustomEnvironment:(id)arg1 ;
-(void)setDelegate:(id<EnvironmentsControllerDelegate>)arg1 ;
-(id<EnvironmentsControllerDelegate>)delegate;
@end

