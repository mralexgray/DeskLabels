//
//  SDEditTitleController.h
//  DeskNotation
//
//  Created by Steven Degutis on 6/30/09.
//  Copyright 2009 8th Light. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class SDTitleFieldEditor;

@interface SDEditTitleController : NSWindowController {
	NSString *newTitle;
	
	IBOutlet NSTextField *newTitleField;
	
	SDTitleFieldEditor *fieldEditor;
}

@property (copy) NSString *newTitle;

- (IBAction) accept:(id)sender;
- (IBAction) cancel:(id)sender;

- (void) setTitle:(NSString*)title;
- (void) setTitleFieldWidth:(float)width;

@end
