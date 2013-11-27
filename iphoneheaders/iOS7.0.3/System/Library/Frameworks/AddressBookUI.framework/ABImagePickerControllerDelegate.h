/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:27:33 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol ABImagePickerControllerDelegate
@property (assign,nonatomic) BOOL popoverSizeUpdatesDisabled; 
@property (nonatomic,readonly) ABImagePickerController * imagePicker; 
@required
-(id)styleProvider;
-(void)imagePicker:(id)arg1 pickedPhoto:(id)arg2;
-(void)imagePickerWillBeRemoved:(id)arg1;
-(void)setPopoverSizeUpdatesDisabled:(BOOL)arg1;
-(id)imagePickerControllerViewControllerToPresentModal:(id)arg1;
-(id)personImageView;
-(void)imagePicker:(id)arg1 presentActionSheet:(id)arg2;
-(void)removeImagePickerControllerFromUI;
-(void)finishTearingDownImagePickerController;
-(void)imagePickerWillBeShown:(id)arg1;
-(id)imagePickerControllerViewForApplyImageAnimation:(id)arg1;
-(void)imagePicker:(id)arg1 didDismissActionSheet:(id)arg2;
-(id)selectedPeople;
-(void)showImageMenuForHelper:(id)arg1;
-(BOOL)popoverSizeUpdatesDisabled;
-(id)imagePicker;
@end
