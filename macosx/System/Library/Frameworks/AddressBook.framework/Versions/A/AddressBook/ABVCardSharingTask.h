/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AddressBook/NSSharingServiceDelegate.h>
#import <AddressBook/NSSharingServicePickerDelegate.h>

@protocol ABShareKitTransitionProvider;
@class NSSharingServicePicker, NSString, NSArray;

@interface ABVCardSharingTask : NSObject <NSSharingServiceDelegate, NSSharingServicePickerDelegate> {

	NSSharingServicePicker* _servicePicker;
	id<ABShareKitTransitionProvider> _transitionProvider;
	NSString* _emailSubject;
	NSArray* _defaultRecipients;

}

@property (copy) NSString * emailSubject;                                            //@synthesize emailSubject=_emailSubject - In the implementation block
@property (copy) NSArray * defaultRecipients;                                        //@synthesize defaultRecipients=_defaultRecipients - In the implementation block
@property (retain) id<ABShareKitTransitionProvider> transitionProvider;              //@synthesize transitionProvider=_transitionProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)menuItemTitleForSharingServiceName:(id)arg1 ;
+(id)vCardSharingServices;
+(id)menuItemTitleForSharingMyCardUsingService:(id)arg1 ;
-(id<ABShareKitTransitionProvider>)transitionProvider;
-(void)setTransitionProvider:(id<ABShareKitTransitionProvider>)arg1 ;
-(void)setDefaultRecipients:(NSArray *)arg1 ;
-(void)shareVCardForPerson:(id)arg1 addressBook:(id)arg2 usingService:(id)arg3 ;
-(NSString *)emailSubject;
-(NSArray *)defaultRecipients;
-(id)sharingParametersForService:(id)arg1 ;
-(void)shareVCardForPerson:(id)arg1 addressBook:(id)arg2 showingServicePickerFromView:(id)arg3 ;
-(void)setEmailSubject:(NSString *)arg1 ;
-(void)dealloc;
-(void)sharingService:(id)arg1 willShareItems:(id)arg2 ;
-(CGRect)sharingService:(id)arg1 sourceFrameOnScreenForShareItem:(id)arg2 ;
-(id)sharingService:(id)arg1 transitionImageForShareItem:(id)arg2 contentRect:(CGRect*)arg3 ;
-(id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long*)arg3 ;
-(id)sharingServicePicker:(id)arg1 sharingServicesForItems:(id)arg2 proposedSharingServices:(id)arg3 ;
-(id)sharingServicePicker:(id)arg1 delegateForSharingService:(id)arg2 ;
@end

