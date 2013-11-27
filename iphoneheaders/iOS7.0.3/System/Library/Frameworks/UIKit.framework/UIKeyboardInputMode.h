/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:29:26 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITextInputMode.h>

@class NSString, NSArray;

@interface UIKeyboardInputMode : UITextInputMode {

	NSString* primaryLanguage;
	NSString* identifier;
	NSString* softwareLayout;
	NSString* hardwareLayout;

}

@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSString * primaryLanguage; 
@property (nonatomic,retain) NSString * softwareLayout; 
@property (nonatomic,retain) NSString * hardwareLayout; 
@property (nonatomic,readonly) NSArray * normalizedIdentifierLevels; 
+(id)keyboardInputModeWithIdentifier:(id)arg1 ;
+(id)canonicalLanguageIdentifierFromIdentifier:(id)arg1 ;
+(id)softwareLayoutFromIdentifier:(id)arg1 ;
+(id)hardwareLayoutFromIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)hardwareLayout;
-(id)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setIdentifier:(id)arg1 ;
-(id)primaryLanguage;
-(void)setPrimaryLanguage:(id)arg1 ;
-(void)setSoftwareLayout:(id)arg1 ;
-(void)setHardwareLayout:(id)arg1 ;
-(id)normalizedIdentifierLevels;
-(id)softwareLayout;
@end
