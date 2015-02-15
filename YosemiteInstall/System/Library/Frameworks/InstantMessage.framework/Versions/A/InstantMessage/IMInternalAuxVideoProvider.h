/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:52:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/InstantMessage.framework/Versions/A/InstantMessage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <InstantMessage/IMAuxVideoProvider.h>

@protocol IMAuxVideoReceiver;
@interface IMInternalAuxVideoProvider : IMAuxVideoProvider {

	id<IMAuxVideoReceiver> _receiver;

}
-(id)auxVideoReceiverTarget;
-(void)deactivateVideoProvider;
-(id)initWithReceiver:(id)arg1 ;
@end
