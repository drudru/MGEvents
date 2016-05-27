//
//  Created by matt on 24/08/12.
//

#import <Cocoa/Cocoa.h>

typedef void(^MGBlock)();
typedef void(^MGBlockWithContext)(id context);

@interface MGBlockWrapper : NSObject

@property (nonatomic, copy) MGBlock block;

+ (MGBlockWrapper *)wrapperForBlock:(MGBlock)block;
- (void)doit;

@end
