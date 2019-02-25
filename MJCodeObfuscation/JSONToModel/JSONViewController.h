//
//  JSONViewController.h
//  MJCodeObfuscation
//
//  Created by cocomanber on 2019/2/23.
//  Copyright © 2019 MJ Lee. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface JSONViewController : NSViewController

@property (unsafe_unretained) IBOutlet NSTextView *inputTextView;
@property (unsafe_unretained) IBOutlet NSTextView *outPutTextView;
- (IBAction)autoCodeCreate:(id)sender;
@property (weak) IBOutlet NSTextField *vildJSONLabel;

@end


