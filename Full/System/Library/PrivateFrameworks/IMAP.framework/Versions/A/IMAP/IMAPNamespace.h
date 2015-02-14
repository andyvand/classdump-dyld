/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:41 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMAP.framework/Versions/A/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface IMAPNamespace : NSObject {

	NSString* _prefix;
	NSString* _separator;
	NSArray* _extensions;

}

@property (nonatomic,copy) NSString * prefix;                 //@synthesize prefix=_prefix - In the implementation block
@property (nonatomic,copy) NSString * separator;              //@synthesize separator=_separator - In the implementation block
@property (nonatomic,copy) NSArray * extensions;              //@synthesize extensions=_extensions - In the implementation block
-(NSString *)prefix;
-(NSString *)separator;
-(void)setPrefix:(NSString *)arg1 ;
-(void)setSeparator:(NSString *)arg1 ;
-(id)description;
-(NSArray *)extensions;
-(void)setExtensions:(NSArray *)arg1 ;
@end

