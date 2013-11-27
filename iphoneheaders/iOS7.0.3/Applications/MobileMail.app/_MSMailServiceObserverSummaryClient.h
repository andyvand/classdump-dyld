/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:35:26 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MBLSingleMessageClient.h>

@class MFNotificationObserverService, MFLibraryMessage;

@interface _MSMailServiceObserverSummaryClient : NSObject <MBLSingleMessageClient> {

	MFNotificationObserverService* _observer;
	MFLibraryMessage* _message;
	unsigned _attempts;
	unsigned _priority;
	double _ordering;

}

@property (assign,nonatomic) MFNotificationObserverService * observer;              //@synthesize observer=_observer - In the implementation block
-(BOOL)wantsContentsOfType:(int)arg1 ;
-(void)notifyContentsAvailable:(id)arg1 forMessage:(id)arg2 ;
-(void)notifyContentsUnavailableForMessage:(id)arg1 error:(id)arg2 ;
-(id)initWithObserver:(id)arg1 message:(id)arg2 ;
-(unsigned)_calculatePriority;
-(unsigned)_calculateOrdering;
-(double)ordering;
-(void)dealloc;
-(id)description;
-(id)message;
-(unsigned)priority;
-(void)setObserver:(id)arg1 ;
-(id)observer;
@end
