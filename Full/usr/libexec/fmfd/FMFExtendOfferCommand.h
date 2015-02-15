/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:05:13 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/libexec/fmfd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <fmfd/FMFBaseCmd.h>

@class NSSet, NSDate;

@interface FMFExtendOfferCommand : FMFBaseCmd {

	NSSet* _emails;
	NSDate* _expiresDate;

}

@property (nonatomic,copy) NSSet * emails;                    //@synthesize emails=_emails - In the implementation block
@property (nonatomic,copy) NSDate * expiresDate;              //@synthesize expiresDate=_expiresDate - In the implementation block
-(id)jsonBodyDictionary;
-(id)pathSuffix;
-(void)setExpiresDate:(NSDate *)arg1 ;
-(id)initWithClientSession:(id)arg1 emails:(id)arg2 groupId:(id)arg3 expiresDate:(id)arg4 ;
-(NSSet *)emails;
-(NSDate *)expiresDate;
-(void)setEmails:(NSSet *)arg1 ;
@end
