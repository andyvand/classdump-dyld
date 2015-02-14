/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:35 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <AssistantServices/NSSecureCoding.h>
#import <AssistantServices/NSCopying.h>

@class NSString;

@interface AFDictationOptions : NSObject <NSSecureCoding, NSCopying> {

	NSString* _applicationName;
	NSString* _applicationVersion;
	NSString* _fieldLabel;
	NSString* _fieldIdentifier;
	NSString* _interactionIdentifier;
	long long _keyboardType;
	NSString* _prefixText;
	NSString* _postfixText;
	NSString* _selectedText;
	long long _returnKeyType;
	NSString* _microphoneIdentifier;
	NSString* _languageCodeOverride;

}

@property (nonatomic,copy) NSString * applicationName;                    //@synthesize applicationName=_applicationName - In the implementation block
@property (nonatomic,copy) NSString * applicationVersion;                 //@synthesize applicationVersion=_applicationVersion - In the implementation block
@property (nonatomic,copy) NSString * fieldLabel;                         //@synthesize fieldLabel=_fieldLabel - In the implementation block
@property (nonatomic,copy) NSString * fieldIdentifier;                    //@synthesize fieldIdentifier=_fieldIdentifier - In the implementation block
@property (nonatomic,copy) NSString * interactionIdentifier;              //@synthesize interactionIdentifier=_interactionIdentifier - In the implementation block
@property (assign,nonatomic) long long keyboardType;                      //@synthesize keyboardType=_keyboardType - In the implementation block
@property (nonatomic,copy) NSString * prefixText;                         //@synthesize prefixText=_prefixText - In the implementation block
@property (nonatomic,copy) NSString * postfixText;                        //@synthesize postfixText=_postfixText - In the implementation block
@property (nonatomic,copy) NSString * selectedText;                       //@synthesize selectedText=_selectedText - In the implementation block
@property (assign,nonatomic) long long returnKeyType;                     //@synthesize returnKeyType=_returnKeyType - In the implementation block
@property (nonatomic,copy) NSString * microphoneIdentifier;               //@synthesize microphoneIdentifier=_microphoneIdentifier - In the implementation block
@property (nonatomic,copy) NSString * languageCodeOverride;               //@synthesize languageCodeOverride=_languageCodeOverride - In the implementation block
+(char)supportsSecureCoding;
-(void)setApplicationName:(NSString *)arg1 ;
-(NSString *)fieldIdentifier;
-(void)setFieldIdentifier:(NSString *)arg1 ;
-(NSString *)interactionIdentifier;
-(void)setInteractionIdentifier:(NSString *)arg1 ;
-(long long)returnKeyType;
-(void)setReturnKeyType:(long long)arg1 ;
-(NSString *)languageCodeOverride;
-(void)setLanguageCodeOverride:(NSString *)arg1 ;
-(id)dictationOptionsWithoutTextContext;
-(NSString *)microphoneIdentifier;
-(void)setMicrophoneIdentifier:(NSString *)arg1 ;
-(NSString *)applicationVersion;
-(void)setApplicationVersion:(NSString *)arg1 ;
-(NSString *)fieldLabel;
-(void)setFieldLabel:(NSString *)arg1 ;
-(NSString *)postfixText;
-(void)setPostfixText:(NSString *)arg1 ;
-(NSString *)prefixText;
-(void)setPrefixText:(NSString *)arg1 ;
-(NSString *)selectedText;
-(void)setSelectedText:(NSString *)arg1 ;
-(long long)keyboardType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)applicationName;
-(void)setKeyboardType:(long long)arg1 ;
@end

