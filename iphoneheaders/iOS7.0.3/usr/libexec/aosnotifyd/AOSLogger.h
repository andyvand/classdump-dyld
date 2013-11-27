/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:51:58 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/aosnotifyd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol AOSLoggerDelegate;
@class ;

@interface AOSLogger : NSObject {

	BOOL _isInternalBuild;
	<AOSLoggerDelegate>* _delegate;

}

@property (nonatomic,retain) <AOSLoggerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isInternalBuild;                        //@synthesize isInternalBuild=_isInternalBuild - In the implementation block
+(id)sharedInstance;
-(void)logAtLevel:(int)arg1 facility:(int)arg2 filename:(const char*)arg3 lineNumber:(int)arg4 message:(id)arg5 ;
-(void)logSettingsDidChange;
-(void)checkForInternalBuild;
-(void)setIsInternalBuild:(BOOL)arg1 ;
-(BOOL)isInternalBuild;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void).cxx_destruct;
@end
