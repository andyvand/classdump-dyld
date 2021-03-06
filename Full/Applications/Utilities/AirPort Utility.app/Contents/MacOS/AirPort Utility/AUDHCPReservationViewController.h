/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 10:35:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/AirPort Utility.app/Contents/MacOS/AirPort Utility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirPort Utility/AUSheetViewController.h>
#import <AirPort Utility/NSWindowDelegate.h>

@class AUDHCPReservation, AAUPrefixFieldEditor, NSTextField, NSPopUpButton, NSButton, NSString;

@interface AUDHCPReservationViewController : AUSheetViewController <NSWindowDelegate> {

	AUDHCPReservation* dataModel;
	AAUPrefixFieldEditor* prefixFieldEditor;
	NSTextField* descriptionField;
	NSPopUpButton* reserveByPopUp;
	NSTextField* clientIDField;
	NSTextField* macAddressField;
	NSTextField* ipAddressField;
	NSTextField* descriptionLabel;
	NSTextField* reserveByLabel;
	NSTextField* clientIDLabel;
	NSTextField* macAddressLabel;
	NSTextField* ipAddressLabel;
	NSButton* saveButton;
	NSButton* cancelButton;

}

@property (nonatomic,retain) AAUPrefixFieldEditor * prefixFieldEditor; 
@property (nonatomic,retain) AUDHCPReservation * dataModel; 
@property (assign) NSTextField * descriptionField; 
@property (assign) NSPopUpButton * reserveByPopUp; 
@property (assign) NSTextField * clientIDField; 
@property (assign) NSTextField * macAddressField; 
@property (assign) NSTextField * ipAddressField; 
@property (assign) NSTextField * descriptionLabel; 
@property (assign) NSTextField * reserveByLabel; 
@property (assign) NSTextField * clientIDLabel; 
@property (assign) NSTextField * macAddressLabel; 
@property (assign) NSTextField * ipAddressLabel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keyPathsForValuesAffectingValid;
-(void)setDataModel:(AUDHCPReservation *)arg1 ;
-(AUDHCPReservation *)dataModel;
-(void)setPrefixFieldEditor:(AAUPrefixFieldEditor *)arg1 ;
-(AAUPrefixFieldEditor *)prefixFieldEditor;
-(id)initWithDataModel:(id)arg1 keyPath:(id)arg2 atIndex:(long long)arg3 document:(id)arg4 forSheetDelegate:(id)arg5 ;
-(id)initWithArrayController:(id)arg1 dataModel:(id)arg2 keyPath:(id)arg3 index:(long long)arg4 document:(id)arg5 forSheetDelegate:(id)arg6 ;
-(void)setIpAddressLabel:(NSTextField *)arg1 ;
-(NSTextField *)ipAddressLabel;
-(id)createNewSubproperty;
-(NSPopUpButton *)reserveByPopUp;
-(void)setReserveByPopUp:(NSPopUpButton *)arg1 ;
-(NSTextField *)clientIDField;
-(void)setClientIDField:(NSTextField *)arg1 ;
-(NSTextField *)macAddressField;
-(void)setMacAddressField:(NSTextField *)arg1 ;
-(NSTextField *)ipAddressField;
-(void)setIpAddressField:(NSTextField *)arg1 ;
-(NSTextField *)reserveByLabel;
-(void)setReserveByLabel:(NSTextField *)arg1 ;
-(NSTextField *)clientIDLabel;
-(void)setClientIDLabel:(NSTextField *)arg1 ;
-(NSTextField *)macAddressLabel;
-(void)setMacAddressLabel:(NSTextField *)arg1 ;
-(NSTextField *)descriptionLabel;
-(void)setDescriptionLabel:(NSTextField *)arg1 ;
-(NSTextField *)descriptionField;
-(void)setDescriptionField:(NSTextField *)arg1 ;
-(void)dealloc;
-(char)valid;
-(void)awakeFromNib;
-(id)nibName;
-(id)windowWillReturnFieldEditor:(id)arg1 toObject:(id)arg2 ;
@end

