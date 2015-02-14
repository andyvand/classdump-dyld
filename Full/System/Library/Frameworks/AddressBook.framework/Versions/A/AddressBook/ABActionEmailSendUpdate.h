/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABActionDelegate.h>
#import <AddressBook/NSSharingServiceDelegate.h>

@protocol ABShareKitTransitionProvider;
@class NSString;

@interface ABActionEmailSendUpdate : NSObject <ABActionDelegate, NSSharingServiceDelegate> {

	id<ABShareKitTransitionProvider> _transitionProvider;

}

@property (retain) id<ABShareKitTransitionProvider> transitionProvider;              //@synthesize transitionProvider=_transitionProvider - In the implementation block
@property (readonly) NSString * actionProperty; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performActionForPerson:(id)arg1 identifier:(id)arg2 transitionProvider:(id)arg3 ;
-(id<ABShareKitTransitionProvider>)transitionProvider;
-(void)performActionForPerson:(id)arg1 identifier:(id)arg2 ;
-(char)shouldEnableActionForPerson:(id)arg1 identifier:(id)arg2 ;
-(void)setTransitionProvider:(id<ABShareKitTransitionProvider>)arg1 ;
-(NSString *)actionProperty;
-(id)titleForPerson:(id)arg1 identifier:(id)arg2 ;
-(void)dealloc;
-(id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long*)arg3 ;
@end

