/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABCollectionAbstractAction.h>
#import <AddressBook/NSSharingServiceDelegate.h>

@class ABCollectionViewItem, NSString;

@interface ABCollectionMessageAction : ABCollectionAbstractAction <NSSharingServiceDelegate> {

	ABCollectionViewItem* _target;

}

@property (retain) ABCollectionViewItem * target;                   //@synthesize target=_target - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)executeWithTarget:(id)arg1 ;
-(void)dealloc;
-(void)setTarget:(ABCollectionViewItem *)arg1 ;
-(ABCollectionViewItem *)target;
-(void)sharingService:(id)arg1 didFailToShareItems:(id)arg2 error:(id)arg3 ;
-(void)sharingService:(id)arg1 didShareItems:(id)arg2 ;
-(id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long*)arg3 ;
@end

