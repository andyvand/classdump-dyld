/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:37:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Mail.app/Contents/MacOS/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Mail/Mail-Structs.h>
@class MUIWebDocumentViewGroup;

@interface MessageWebDocumentViewGroupManager : NSObject {

	MUIWebDocumentViewGroup* _viewGroup;

}

@property (nonatomic,retain) MUIWebDocumentViewGroup * viewGroup;              //@synthesize viewGroup=_viewGroup - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedInstance;
-(void)setViewGroup:(MUIWebDocumentViewGroup *)arg1 ;
-(MUIWebDocumentViewGroup *)viewGroup;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

