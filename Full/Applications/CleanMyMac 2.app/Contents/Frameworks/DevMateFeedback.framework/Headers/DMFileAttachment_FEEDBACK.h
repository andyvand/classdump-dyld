/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:03 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/CleanMyMac 2.app/Contents/Frameworks/DevMateFeedback.framework/DevMateFeedback
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIFoundation/NSTextAttachment.h>

@class NSURL;

@interface DMFileAttachment_FEEDBACK : NSTextAttachment {

	NSURL* _fileURL;

}

@property (nonatomic,retain) NSURL * fileURL;              //@synthesize fileURL=_fileURL - In the implementation block
-(id)initWithFileURL:(id)arg1 ;
-(void)dealloc;
-(id)fileWrapper;
-(void)setFileURL:(NSURL *)arg1 ;
-(NSURL *)fileURL;
@end
