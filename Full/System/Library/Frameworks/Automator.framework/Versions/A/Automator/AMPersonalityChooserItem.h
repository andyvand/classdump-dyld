/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Automator/Automator-Structs.h>
@class NSString, NSMutableArray, AMWorkflowPersonality, NSImage;

@interface AMPersonalityChooserItem : NSObject {

	NSString* _imageTitle;
	NSString* _templateDescription;
	NSMutableArray* _contentSources;
	NSMutableArray* _subTemplates;
	AMWorkflowPersonality* _workflowPersonality;
	double _imageDimension;
	CGSize _imageInset;
	NSImage* _image;

}

@property (retain) AMWorkflowPersonality * workflowPersonality;              //@synthesize workflowPersonality=_workflowPersonality - In the implementation block
@property (readonly) NSImage * imageRepresentation; 
@property (readonly) NSString * imageTitle; 
@property (readonly) double imageDimension; 
@property (readonly) CGSize imageInset; 
@property (readonly) NSString * templateDescription; 
@property (readonly) char isSelectable; 
@property (retain) NSImage * image;                                          //@synthesize image=_image - In the implementation block
-(NSString *)templateDescription;
-(void)setWorkflowPersonality:(AMWorkflowPersonality *)arg1 ;
-(AMWorkflowPersonality *)workflowPersonality;
-(double)imageDimension;
-(CGSize)imageInset;
-(NSImage *)imageRepresentation;
-(NSString *)imageTitle;
-(void)dealloc;
-(id)description;
-(NSImage *)image;
-(void)setImage:(NSImage *)arg1 ;
-(char)isSelectable;
@end

