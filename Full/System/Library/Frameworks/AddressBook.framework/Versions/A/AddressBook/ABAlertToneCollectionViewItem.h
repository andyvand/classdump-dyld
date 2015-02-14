/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABCollectionViewItem.h>
#import <AddressBook/TKTonePickerViewControllerDelegate.h>

@class TKTonePickerViewController, NSString;

@interface ABAlertToneCollectionViewItem : ABCollectionViewItem <TKTonePickerViewControllerDelegate> {

	TKTonePickerViewController* _tonePickerViewController;

}

@property (retain) TKTonePickerViewController * tonePickerViewController;              //@synthesize tonePickerViewController=_tonePickerViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTonePickerViewController:(TKTonePickerViewController *)arg1 ;
-(void)_updateViewControls;
-(void)_updateViewValue;
-(id)_labelMenuItems;
-(id)_localizedLabel;
-(id)toneIdentifierForAlertDictionary:(id)arg1 ;
-(id)toneNameForIdentifier:(id)arg1 ;
-(TKTonePickerViewController *)tonePickerViewController;
-(void)tonePickerViewController:(id)arg1 selectedToneWithIdentifier:(id)arg2 ;
-(void)dealloc;
@end

