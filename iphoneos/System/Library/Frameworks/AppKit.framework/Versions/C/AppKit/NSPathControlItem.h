/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSPathComponentCell, NSString, NSAttributedString, NSImage, NSURL;

@interface NSPathControlItem : NSObject {

	NSPathComponentCell* _secretCell;

}

@property (copy) NSString * title; 
@property (copy) NSAttributedString * attributedTitle; 
@property (retain) NSImage * image; 
@property (readonly) NSURL * URL; 
+(id)itemWithCell:(id)arg1 ;
-(id)init;
-(oneway void)release;
-(NSURL *)URL;
-(NSImage *)image;
-(void)setImage:(NSImage *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSAttributedString *)attributedTitle;
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(id)initWithPathComponentCell:(id)arg1 ;
-(id)pathComponentCell;
@end
