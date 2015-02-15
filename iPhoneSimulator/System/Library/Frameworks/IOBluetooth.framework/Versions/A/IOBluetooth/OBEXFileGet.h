/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:00 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IOBluetooth/IOBluetooth-Structs.h>
#import <IOBluetooth/OBEXFileAction.h>

@class NSString;

@interface OBEXFileGet : OBEXFileAction {

	NSString* mLocalGetPath;
	NSString* mRemoteFileName;

}
+(id)withOBEXSession:(id)arg1 target:(id)arg2 eventSelector:(SEL)arg3 ;
-(void)initForNewAction;
-(void)startCommand;
-(int)getRemoteFileNamed:(id)arg1 toLocalPathAndName:(id)arg2 ;
-(int)getDefaultVCardToLocalPathAndName:(id)arg1 ;
-(void)OBEXGetHandler:(OBEXGetCommandResponseData*)arg1 ;
-(void)SendGetResponse:(const OBEXGetCommandResponseData*)arg1 ;
-(void)postFileReceivedProcessing;
@end
