/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AppKit/NSTextFieldCell.h>

@class NSTextView, NSAttributedString;

@interface ABShadowTextFieldCell : NSTextFieldCell {

	NSTextView* _fieldEditor;
	NSAttributedString* _originalPlaceholder;
	NSAttributedString* _alternatePlaceholder;
	char _displaysAlternatePlaceholder;
	char _ignoredByAccessibility;

}

@property (copy) NSAttributedString * originalPlaceholder;                          //@synthesize originalPlaceholder=_originalPlaceholder - In the implementation block
@property (copy) NSAttributedString * alternatePlaceholder;                         //@synthesize alternatePlaceholder=_alternatePlaceholder - In the implementation block
@property (assign,nonatomic) char displaysAlternatePlaceholder;                     //@synthesize displaysAlternatePlaceholder=_displaysAlternatePlaceholder - In the implementation block
@property (getter=accessibilityIsIgnored) char ignoredByAccessibility;              //@synthesize ignoredByAccessibility=_ignoredByAccessibility - In the implementation block
-(void)setOriginalPlaceholder:(NSAttributedString *)arg1 ;
-(void)setDisplaysAlternatePlaceholder:(char)arg1 ;
-(NSAttributedString *)originalPlaceholder;
-(NSAttributedString *)alternatePlaceholder;
-(void)setAlternatePlaceholder:(NSAttributedString *)arg1 ;
-(char)displaysAlternatePlaceholder;
-(void)setIgnoredByAccessibility:(char)arg1 ;
-(void)dealloc;
-(char)accessibilityIsIgnored;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)fieldEditorForView:(id)arg1 ;
@end

