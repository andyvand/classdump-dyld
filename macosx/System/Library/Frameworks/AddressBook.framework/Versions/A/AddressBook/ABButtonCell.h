/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AppKit/NSButtonCell.h>

@class NSMutableDictionary;

@interface ABButtonCell : NSButtonCell {

	NSMutableDictionary* _regularImages;
	NSMutableDictionary* _selectedImages;
	NSMutableDictionary* _pressedImages;
	NSMutableDictionary* _disabledImages;
	char _tracking;

}
-(id)disabledImageForControlTint:(unsigned long long)arg1 ;
-(id)pressedImageForControlTint:(unsigned long long)arg1 ;
-(id)imageForControlTint:(unsigned long long)arg1 ;
-(void)setImage:(id)arg1 forControlTint:(unsigned long long)arg2 ;
-(void)setPressedImage:(id)arg1 forControlTint:(unsigned long long)arg2 ;
-(void)setSelectedImage:(id)arg1 forControlTint:(unsigned long long)arg2 ;
-(id)selectedImageForControlTint:(unsigned long long)arg1 ;
-(void)setDisabledImage:(id)arg1 forControlTint:(unsigned long long)arg2 ;
-(void)finalize;
-(void)dealloc;
-(void)drawInteriorWithFrame:(CGRect)arg1 inView:(id)arg2 ;
@end

